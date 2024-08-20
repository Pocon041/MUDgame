#include <iostream>  
#include <vector>  
#include <unordered_map> 
#include"Goods.h"

enum BagType {
	None,
	Default,  //默认背包
	Role,  //角色
	Skill, //技能
	Equip, //装备
	Soldier,   //小兵
	Currency,  //货币
};

class BagConfig {
public:
	BagType bagType;      //背包类型
	int initCapacity;    //初始容量
};

class Bag {
private:
    BagType _bagType;                        // 背包类型:通过读取配置表获得容量等  
    std::vector<Item*> _slots;               // 槽位：如果容量=50，那么_slots.size()=50，允许为空  
    std::unordered_map<unsigned long, Item*> _allItems; // 所有道具  
    // key:穿戴id，value:{key2:穿戴槽位,value2:道具Id}  
    std::unordered_map<int, std::unordered_map<unsigned int, long>> _wears; // 多套穿戴  
    // key:道具id，value:32位的穿戴id（通常游戏中穿戴几乎不可能>32套）使用二进制节省空间  
    std::unordered_map<unsigned long, int> _wearIdRefs; // 判断这个id是否有穿戴  
    int _useWearId;                           // 当前使用了哪套穿戴  

public:
    Bag(BagConfig config) : _bagType(config.bagType), _slots(config.initCapacity), _useWearId(0) {
        // 初始化槽位等  
    }

    // 其他相关方法如下，例如添加物品、获取物品等  
    //获得物品
    //获得道具：先遍历_slots寻找是否有配置Id相同，且没有塞满的，有则放入，没有则找到空槽位放入
    int AcquireItem(int inMetaId, int inAmount = 1); 
    
    //获得空格子或者相同的格子
    bool GetEmptyOrSameSlot(int metaId);

    //删除道具
    //遍历_allItems找到配置Id相同的删除指定数量，删除的同时把该道具的穿戴信息清除
    int DelItem(unsigned long id, int count);
    int DelItem(int metaId,int count);

    //扩容
    //修改_slots即可
    void ChangeSize(int size);

    //穿戴
    // 校验槽位有则替换，将道具Id设置到对应穿戴id+槽位
    void Wear(int slot, unsigned long id,int wearId);
    bool IsWear(unsigned long id, int wearId);

    //卸下
    void UnWear(int slot, int wearId, bool isNotify = true);
    void Unwear(unsigned long id, int wearId);
};
