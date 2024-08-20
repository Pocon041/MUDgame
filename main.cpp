#include<iostream>
#include"map.h"

Map map1(1, 3, 3, 3, 2, 1, 0);		//第一张地图的信息
Map map2(2, 2, 3, 1, 2, 1, 0);		//第二张地图的信息
Map map3(3, 3, 1, 0, 2, 0, 0);		//第三张地图的信息
char dir;                           //方位

int main() {
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
}
