#ifndef ROLE_H_INCLUDED
#define ROLE_H_INCLUDED

#include <string>
#include"Bag.h"

class Role {
private:
	std::string name;//昵称
	int type;//职业
	int exp_Max;//最大经验值
	int health;				//气血值
	int magic_max;			//魔法值
public:
	Role(int type);
	~Role();

	std::string getName();			//得到名字
	int getType();					//得到种类
	int getHealth();			//得到气血值
	void setHealth(int hp);		//设置气血值
	int getMagic();				//得到魔法值
	void setMagic(int mp);		//设置魔法值
};

class Hero :public Role{   //主角
private:
	std::string name;		//昵称
	int level;				//级别
	int exp;				//经验值
	int money;				//金币
	int health_max;			//最大气血值
	int magic;				//最大魔法值
	int attack;				//攻击力
	int defend;				//防御
	int weapon;				//当前武器
	int clothes;			//当前盔甲
	int mapId;				//记录玩家当前所在地
	int skillLevel;
	int story;				//剧情节点

	Bag hero;
public:
	int getHealth_max();				//得到最大气血值
	void setHealth_max(int hp_m);		//设置最大气血值
	
	int getMagic_max();					//得到最大魔法量
	void setMagic_max(int mp_m);		//设置最大魔法值
	int getAttack();			//得到攻击力
	void setAttack(int a);		//设置攻击力
	int getDefend();			//得到防御力
	void setDefend(int d);		//设置防御力
	int getExp();				//得到经验值
	void setExp(int ex);		//设置经验值
	void setExpSave(int ex);				//设置经验存储
	int getlevelExp_max(int whichlevel);	//得到升级所需经验值
	int getLevel();				//得到级别
	void setLevel(int l);		//设置等级
	void setLevelSave(int l);	//设置存储等级
	int getMoney();				//得到金币
	void setMoney(int m);		//设置金币
	int getMapId();				//得到地图ID
	void setMapId(int NewMapId);	//设置地图ID
	int getStory();				//得到故事节点
	void setStory(int s);		//设置故事节点
};

class Merchant: public Role{	//商人
	std::string name;			//昵称
	Bag merchant;
};

class Soldier : public Role{   //小兵
private:
	std::string name;		//昵称
	int level;				//级别
	int attack;				//攻击力
	int defend;				//防御

	Bag soldier;
};

#endif // ROLE_H_INCLUDED
