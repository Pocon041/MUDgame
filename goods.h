#ifndef GOODS_H
#define GOODS_H

#include <iostream>
#include <string>

class Item {
private:
	std::string name;
	std::string desc;
	int priceSell;
	int priceBuy;
	int id;
public:
	Item(std::string name, std::string desc, int priceSell, int priceBuy, int id);
	Item();
	std::string getName() { return name; }                      //得到名字
	void setName(std::string name) { this->name = name; }		//设置名字
	std::string getDesc() { return desc; }						//得到描述
	void setDesc(std::string desc) { this->desc = desc; }		//设置描述
	int getPricceSell() { return priceSell; }					//得到售价
	void setPriceSell(int pricesell) { this->priceSell = pricesell; }   //设置售价
	int getPriceBuy() { return priceBuy; }						//得到价格
	void setPriceBuy(int pricebuy) { this->priceBuy = pricebuy; } //设置价格
	int getid() { return id; }									//得到id
	//virtual int getaddAttack();
	//virtual int getaddDefend();
	//virtual int getaddHP();
	//virtual int getaddMP();
	//void showItem();
};

class Goods :public Item {
protected:
	;
public:
	Goods(std::string name, std::string desc, int priceSell, int priceBuy, int id_Goods);   
	Goods();
	int getId();
	~Goods();
};

class Weapon :public Item{  //武器
private:
	int addAttack; //攻击增益
	int addDefend; //防御增益
public:
	Weapon(int id);
	int getaddAttack() { return this->addAttack; }
	void setaddAttack(int addAttack) { this->addAttack = addAttack; }
	int getaddDefend() { return this->addDefend; }
	void setaddDefend(int addDefend) { this->addDefend = addDefend; }
	~Weapon();

};

class Potion :public Item {   //药水
private:
	int addHP; //气血增益
	int addMP; //魔法值增益
public:
	Potion(int id);
	int getaddHP() { return addHP; }
	void setaddHP(int addHP) { this->addHP = addHP; }
	int getaddMP() { return addMP; }
	void setaddMP(int addMP) { this->addMP = addMP; }
	~Potion();
};

class Armor :public Item {    //盔甲
private:
	int addAttack; //攻击增益
	int addDefend; //防御增益
public:
	Armor(int id);
	int getaddAttack() { return this->addAttack; }
	void setaddAttack(int addAttack) { this->addAttack = addAttack; }
	int getaddDefend() { return this->addDefend; }
	void setaddDefend(int addDefend) { this->addDefend = addDefend; }
	~Armor();
};
#endif 
