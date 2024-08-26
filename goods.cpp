#include <iostream>
#include <string>
#include "goods.h"

using namespace std;

Item::Item(std::string name, std::string desc, int priceSell, int priceBuy, int id) : name(name), desc(desc), priceSell(priceSell), priceBuy(priceBuy), id(id) {}

Item::Item() {}

/*void Item::showItem() {
	cout << name << endl;
	cout << desc << endl;
	if (id >= 0 && id <= 7) { //武器
		cout << "攻击力：" << getaddAttack() << endl;
		cout << "防御力：" << getaddDefend() << endl;
	}
	else if (id <= 15) { // 药品
		cout << "增加气血：" << getaddHP() << endl;
		cout << "增加内力：" << getaddMP() << endl;
	}
	else { // 防具
		cout << "攻击力：" << getaddAttack() << endl;
		cout << "防御力：" << getaddDefend() << endl;
	}
}*/

Weapon::Weapon(int id) {
	switch (id) {

	case 0: {
		id = 0;
		this->setName("柴刀");
		this->setDesc("山林樵夫用来砍柴的刀，做工粗糙，勉强可以用作武器");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 1: {
		id = 1;
		this->setName("柴刀");
		this->setDesc("山林樵夫用来砍柴的刀，做工粗糙，勉强可以用作武器");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;

	}
	case 2: {
		id = 2;
		this->setName("柴刀");
		this->setDesc("山林樵夫用来砍柴的刀，做工粗糙，勉强可以用作武器");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 3: {
		id = 3;
		this->setName("柴刀");
		this->setDesc("山林樵夫用来砍柴的刀，做工粗糙，勉强可以用作武器");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;

	}
	case 4: {
		id = 4;
		this->setName("柴刀");
		this->setDesc("山林樵夫用来砍柴的刀，做工粗糙，勉强可以用作武器");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;

	}
	case 5: {
		id = 5;
		this->setName("柴刀");
		this->setDesc("山林樵夫用来砍柴的刀，做工粗糙，勉强可以用作武器");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;

	}
	case 6: {
		id = 6;
		this->setName("柴刀");
		this->setDesc("山林樵夫用来砍柴的刀，做工粗糙，勉强可以用作武器");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 7: {
		id = 7;
		this->setName("柴刀");
		this->setDesc("山林樵夫用来砍柴的刀，做工粗糙，勉强可以用作武器");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;

	}
	default: break;

	}
}

Potion::Potion(int id) {
	switch (id) {

	case 8: {
		id = 8;
		this->setName("金疮药");
		this->setDesc("常见的疗伤药，补充少量气血");
		this->setaddHP(0);
		this->setaddMP(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 9: {
		id = 9;
		this->setName("金疮药");
		this->setDesc("常见的疗伤药，补充少量气血");
		this->setaddHP(0);
		this->setaddMP(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
		break;
	}
	case 10: {
		id = 10;
		this->setName("金疮药");
		this->setDesc("常见的疗伤药，补充少量气血");
		this->setaddHP(0);
		this->setaddMP(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
		break;

	}
	case 11: {
		id = 11;
		this->setName("金疮药");
		this->setDesc("常见的疗伤药，补充少量气血");
		this->setaddHP(0);
		this->setaddMP(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
		break;

	}
	case 12: {
		id = 12;
		this->setName("金疮药");
		this->setDesc("常见的疗伤药，补充少量气血");
		this->setaddHP(0);
		this->setaddMP(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
		break;

	}
	case 13: {
		id = 13;
		this->setName("金疮药");
		this->setDesc("常见的疗伤药，补充少量气血");
		this->setaddHP(0);
		this->setaddMP(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
		break;
	}
	case 14: {
		id = 14;
		this->setName("金疮药");
		this->setDesc("常见的疗伤药，补充少量气血");
		this->setaddHP(0);
		this->setaddMP(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
		break;
	}
	case 15: {
		id = 15;
		this->setName("金疮药");
		this->setDesc("常见的疗伤药，补充少量气血");
		this->setaddHP(0);
		this->setaddMP(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	default: break;

	}
}

Armor::Armor(int id) {
	switch (id) {

	case 16: {
		id = 16;
		this->setName("青布衣");
		this->setDesc("普通人家所穿的服饰，面料与裁剪都很普通");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 17: {
		id = 17;
		this->setName("青布衣");
		this->setDesc("普通人家所穿的服饰，面料与裁剪都很普通");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 18: {
		id = 18;
		this->setName("青布衣");
		this->setDesc("普通人家所穿的服饰，面料与裁剪都很普通");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 19: {
		id = 19;
		this->setName("青布衣");
		this->setDesc("普通人家所穿的服饰，面料与裁剪都很普通");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 20: {
		id = 20;
		this->setName("青布衣");
		this->setDesc("普通人家所穿的服饰，面料与裁剪都很普通");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 21: {
		id = 21;
		this->setName("青布衣");
		this->setDesc("普通人家所穿的服饰，面料与裁剪都很普通");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 22: {
		id = 22;
		this->setName("青布衣");
		this->setDesc("普通人家所穿的服饰，面料与裁剪都很普通");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	case 23: {
		id = 23;
		this->setName("青布衣");
		this->setDesc("普通人家所穿的服饰，面料与裁剪都很普通");
		this->setaddAttack(0);
		this->setaddDefend(0);
		this->setPriceBuy(0);
		this->setPriceSell(0);
		break;
	}
	default: break;

	}
}


Goods::Goods(std::string name, std::string desc, int priceSell, int priceBuy, int id) : Item(name,desc,priceSell,priceBuy,id) {}

Goods::Goods() {}



Goods::~Goods() {}

//Weapon::Weapon(int addAttack, int addDefend) : addAttack(addAttack), addDefend(addDefend) {}



Weapon::~Weapon() {}

//Potion::Potion(int addHP, int addMP) : addHP(addHP), addMP(addMP) {}



Potion::~Potion() {}

//Armor::Armor(int id) {}


Armor::~Armor() {}

