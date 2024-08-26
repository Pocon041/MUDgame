#include "role.h"

Role::Role(const std::string name, int type, int exp_Max, int health, int magic, int health_max, int magic_max) {
	this->name = name;
	this->type = type;
	this->exp_Max = exp_Max;
	this->health = health;
	this->magic = magic;
	this->health_max = health_max;
	this->magic_max = magic_max;
}

/*Role Role::operator=(Role& other)
{
	this->name = other.name;
	this->type = other.type;
	this->exp_Max = other.exp_Max;
	this->health = other.health;
	this->magic = other.magic;
	this->health_max = other.health_max;
	this->magic_max = other.magic_max;
	return *this;
}*/

/*Role::Role(Role& other)
{
	*this = other;
}*/

Hero::Hero(std::string name, int type, int exp_Max, int health, int magic, int health_max, int magic_max, int level, int exp, int money, int attack, int defend, int weapon, int clothes)
	:Role(name, type, exp_Max, health, magic, health_max, magic_max)
{
	this->level = level;
	this->exp = exp;
	this->money = money;
	this->attack = attack;
	this->defend = defend;
	this->weapon = weapon;
	this->clothes = clothes;
}

/*Hero::Hero(Hero& other) :Role(other)
{
	this->level = other.level;
	this->exp = other.exp;
	this->money = other.money;
	this->attack = other.attack;
	this->defend = other.defend;
	this->weapon = other.weapon;
	this->clothes = other.clothes;
}*/

NPC::NPC(std::string name, int type, int exp_Max, int health, int magic, int health_max, int magic_max, int id)
	:Role(name,type,exp_Max,health,magic,health_max,magic_max)
{
	this->id = id;
}

Enemy::Enemy(std::string name, int type, int exp_Max, int health, int magic, int health_max, int magic_max, int id, int level, int attack, int defend)
	:NPC(name, type, exp_Max, health, magic, health_max, magic_max,id)
{
	this->level = level;
	this->attack = attack;
	this->defend = defend;
}
