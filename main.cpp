#include<iostream>
#include"map.h"

Map map1(1, 3, 3, 3, 2, 0, 2);

int main() {
	Map* ptrmap=&map1;
	ptrmap->printMap(ptrmap->id_map);

}
