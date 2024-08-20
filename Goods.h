#ifndef GOODS_H
#define GOODS_H

#include <iostream>
#include <string>

class Item {
private:
	std::string name;
	int id;
	int priceSell;
	int priceBuy;
public:
	Item(std::string name, int id, int priceSell, int priceBuy);
	void showItem();
};

class Goods :public Item {
private:
	std::string name; //装备名称
	std::string desc; //装备描述
	int id;
	//int type; //装备类型：0-武器、1-防具、2-药物       //这块用继承，好维护一点而且代码高级（×）一点


	int priceSell; //装备售出价格
	int priceBuy; //装备购入价格
public:
	Goods(std::string name, std::string desc, int id, int priceSell, int priceBuy);
	std::string getName();
	std::string getDesc();
	int getpriceSell();
	int getpriceBuy();
	~Goods();
};

class Weapon :public Goods {  //武器
private:
	int addAttack; //攻击增益
	int addDefend; //防御增益
public:
	Weapon(int addAttack, int addDefend);
	int getaddAttack();
	int getaddDefend();
	~Weapon();

};

class Potion :public Goods {   //药水
private:
	int addHP; //气血增益
	int addMP; //魔法值增益
public:
	Potion(int addHP, int addMP);
	int getaddHP();
	int getaddMP();
	~Potion();
};

class Armor :public Goods {    //盔甲
private:
	int addAttack; //攻击增益
	int addDefend; //防御增益
public:
	Armor(int addAttack, int addDefend);
	int getaddAttack();
	int getaddDefend();
	~Armor();
};
#endif 
