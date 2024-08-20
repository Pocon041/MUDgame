# include "Role.h"
# include "Enemy.h"
# include "Bag.h"       //装备、技能都在Bag文件中
# include "Map.h"       //用于与地图中特定地点进行互动
# include <iostream>

//互动大体上可以分为两种类型：一、玩家与npc     二、玩家自身
//玩家与npc可以分成三种形式的互动：1、战斗    2、交流(各种奇遇剧情)   3、购买（仅限商店）
//玩家自身可以采取三种行动：1、修炼         2、疗伤         3、探索（根据地图提示搜索当地的宝物）

//一.1  战斗：                 （目前只支持1v1，1vN可能需要用到容器或者数组，还没想好）
class Fight
(
private:
	Role player;
	Npc enemy;
	int round;                          //战斗回合数
	int damage;                         //伤害值
	Goods goods[24] = { 0, 1, 2, 3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23 };         //物品？暂定

public:
    Fight ( Role player, Npc enemy);    //对战双方信息
    void Fight_RoundStart();            //对战每回合开始时重复，执行下列函数
    void Fight_ShowCondition();         //展示角色的状态
    void Fight_Order();                 //通过“速度”属性判断双方出手顺序
    void FIght_Act();                   //采取某项行动（包括1.普通攻击、2.技能释放、3.道具使用）    
    void Fight_SkillChoice();           //技能选择              （目前只支持攻击型技能）
    void Fight_GoodsUsing();            //道具的使用            （目前只支持回血道具）
    bool Fight_Hit();                   //命中计算，通过进攻方的“命中”和受击者的“闪避”属性判断是否命中，要用到随机数    
    int Fight_DamageCalc();             //伤害计算，具体公式为（“总攻击”-“总防御”）* “进攻方技能倍率” *（1-“防守方免伤倍率”）
    void Fight_Judge();                 //战斗结果判定
//战斗获胜后奖励结算：
    void Fight_AddExp();                //经验增加
    void FIght_AddMoney();              //金币增加
    void Fight_AddGoods();              //道具拾取
)

//一.2  交流
class Communicate
{
private:
    Role player;
    Npc npc;

public:
    Communicate(Role player, Npc npc);  //交谈双方信息
    Communicate_Judge();                //此处要求npc必须有编号！！！      根据编号判断该npc是否为事先初始化好能触发奇遇的某几个特定npc
    communicate_Express();              //对话展示（一些可有可无的剧情）
}

//一.3    购买
class Trade
{
public:
    Trade(Role player, Npc npc);    //交易双方信息
    Trade_Judge();                  //此处同样要求npc必须有编号！！！      根据编号判断该npc是否是商店npc

//购买完物品会存入背包，目前没想好怎么写

}


//二.1、2、3都相对较简单，修炼需要地图的时间设定，疗伤需要背包物品的使用，探索同样需要通过地图格子的编号来判断探索结果
