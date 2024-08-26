#ifndef ROLE_H_INCLUDED
#define ROLE_H_INCLUDED

#include <string>
#include"bag.h"

class Role {
private:
	std::string name;		//昵称
	int type;				//职业
	int exp_Max;			//最大经验值
	int health;				//气血值
	int magic;				//魔法值
	int health_max;			//最大气血值
	int magic_max;			//最大魔法值
public:
	Role(std::string name, int type , int exp_Max, int health ,int magic , int health_max ,int magic_max);
	Role() {};
	//Role( Role& other);
	//Role operator=(Role& other);

	std::string getName() { return name; }			//得到名字
	int getType() { return type; }					//得到种类
	int getHealth() { return health; }				//得到气血值
	void setHealth(int hp) { health = hp; }			//设置气血值
	int getMagic() { return magic; }				//得到魔法值
	void setMagic(int mp) { magic=mp; }				//设置魔法值
	int getHealth_max() { return health_max; }				//得到最大气血值
	void setHealth_max(int hp_m) { health_max = hp_m; }		//设置最大气血值
	int getMagic_max() { return magic_max; }				//得到最大魔法量
	void setMagic_max(int mp_m) { magic_max = mp_m; }		//设置最大魔法值
};

class Hero :public Role{   //主角
private:
	std::string name;		//昵称
	int level;				//级别
	int exp;				//经验值
	int money;				//金币
	int attack;				//攻击力
	int defend;				//防御
	int weapon;				//当前武器
	int clothes;			//当前盔甲
	//int mapId;				//记录玩家当前所在地
	//int skillLevel;
	//int story;				//剧情节点
	//Bag hero;

public:
	Hero(std::string name, int type = 0, int exp_Max = 0, int health = 0, int magic = 0, int health_max = 0, int magic_max = 0, int level = 1, int exp = 0, int money = 500,
		int attack = 10, int defend = 20, int weapon = 0, int clothes = 0);
	Hero() {};
	//Hero(Hero& other);

	int getAttack() { return attack; }			//得到攻击力
	void setAttack(int a) { attack = a; }		//设置攻击力
	int getDefend() { return defend; }			//得到防御力
	void setDefend(int d) { defend = d; }		//设置防御力
	int getExp() { return exp; }				//得到经验值
	void setExp(int ex) { exp = ex; }		//设置经验值
	//void setExpSave(int ex);				//设置经验存储
	//int getlevelExp_max(int whichlevel);	//得到升级所需经验值
	int getLevel() { return level; }				//得到级别
	void setLevel(int l) { level=l; }			//设置等级
	//void setLevelSave(int l);	//设置存储等级
	int getMoney() { return money; }				//输出金币
	void earnMoney(int m) { money += m; }			//赚到金币
	void setMoney(int m) { money = m; }		//设置金币
	//int getMapId();				//得到地图ID
	//void setMapId(int NewMapId);	//设置地图ID
	//int getStory();				//得到故事节点
	//void setStory(int s);		//设置故事节点
};


class NPC :public Role
{
private:
	std::string name;
	int id;
public:
	NPC(std::string name, int type, int exp_Max, int health, int magic, int health_max, int magic_max,int id);
	NPC() {};
	std::string getname() { return name; }				//昵称
	int getid() { return id; }
};



class Merchant: public NPC		//商人
{	
	;
};

class Enemy : public NPC		//小兵
{  
private:
	int level;				//级别
	int attack;				//攻击力
	int defend;				//防御
			
public:
	Enemy(std::string name, int type, int exp_Max, int health, int magic, int health_max, int magic_max, int id, int level, int attack, int defend);
	Enemy() {};
	int getAttack() { return attack; }			//得到攻击力
	void setAttack(int a) { attack = a; }		//设置攻击力
	int getDefend() { return defend; }			//得到防御力
	void setDefend(int d) { defend = d; }		//设置防御力
	int getLevel() { return level; }			//得到级别
};

#endif // ROLE_H_INCLUDED
