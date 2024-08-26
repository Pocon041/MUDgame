#include "interaction.h"

int flag=0;

Fight::Fight(Hero hero, Enemy enemy, int round)
{
	this->hero = hero;
	this->enemy = enemy;
	this->round = round;
}

void Fight::ShowCondition()
{	
	std::cout << "第" << this->round << "回合" << std::endl;
	std::cout << "玩家：" << std::endl;
	std::cout << "生命值：" << hero.getHealth() << std::endl;
	std::cout << "敌人：" << std::endl;
	std::cout << "生命值：" << enemy.getHealth() << std::endl;
}

void Fight::Act(Hero hero)
{
	std::cout << "1.普通攻击"<<std::endl;
	std::cin >> flag;
	switch (flag)
	{
	case 1:
		int temp = enemy.getHealth();
		temp -= hero.getAttack() - enemy.getDefend();
		enemy.setHealth(temp);
	}

}

void Fight::Act(Enemy enemy)
{
	int temp = hero.getHealth();
	std::cout << "敌方使用了普通攻击" << std::endl;
	temp -= enemy.getAttack() - hero.getDefend();
	hero.setHealth(temp);
}

int Fight::DamageCalc()  //（“总攻击”-“总防御”）* “进攻方技能倍率” *（1-“防守方免伤倍率”）
{
	return enemy.getAttack();
}




