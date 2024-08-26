#include<iostream>
#include"map.h"
#include"role.h"
#include"interaction.h"

int main() {
	return 0;
}

/*Hero hero("a", 0, 0, 100, 100, 100, 100, 1, 0, 500, 20, 10, 0, 0);      //战斗测试块
Enemy enemy("monster", 0, 100, 50, 50, 50, 50, 1, 1, 5, 5);

int main() {
	Fight fight(hero, enemy,1);
	fight.ShowCondition();
	fight.Act(hero);
	fight.ShowCondition();
	fight.Act(enemy);
	fight.ShowCondition();
}*/



/*Map map1(1, 3, 3, 3, 2, 1, 0);		//第一张地图的信息
Map map2(2, 2, 3, 1, 2, 1, 0);		//第二张地图的信息
Map map3(3, 3, 1, 0, 2, 0, 0);		//第三张地图的信息
char dir;                           //方位


int main() {                                                   //地图测试块
	Map* ptrmap=&map1;
	ptrmap->printMap(ptrmap->id_map);
	while (1) {
		std::cin >> dir;
		ptrmap->changePos(dir);
		ptrmap->printMap(ptrmap->id_map);
		if (dir == 'q')   break;
		if (ptrmap->currX == ptrmap->exitX && ptrmap->currY == ptrmap->exitY) {
			ptrmap = &map2;
			ptrmap->printMap(ptrmap->id_map);
			while (1) {
				std::cin >> dir;
				ptrmap->changePos(dir);
				ptrmap->printMap(ptrmap->id_map);
				if (dir == 'q') break;
				if (ptrmap->currX == ptrmap->exitX && ptrmap->currY == ptrmap->exitY) {
					ptrmap = &map3;
					ptrmap->printMap(ptrmap->id_map);
					while (1) {
						std::cin >> dir;
						ptrmap->changePos(dir);
						ptrmap->printMap(ptrmap->id_map);
						if (ptrmap->currX == ptrmap->exitX && ptrmap->currY == ptrmap->exitY) break;
					}
				}
			}
		}
	}
}*/
