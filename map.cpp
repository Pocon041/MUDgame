#include<iostream>
#include "map.h"

Map::Map(int id_map, int sizeX, int sizeY, int entX, int entY, int exitX, int exitY)
{
    this->id_map = id_map;
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    this->entX = entX;
    this->entY = entY;
    this->exitX = exitX;
    this->exitY = exitY;
    for (int i = 0; i < sizeX; i++) {
        for (int j = 0; j < sizeY; j++) {
            this->cood[i][j] = '_';
        }
    }
    this->cood[entX][entY] = "*";
}

void Map::printMap(int id_map)
{
	if (id_map == 1) {
        std::cout << "                      _______          " << std::endl;
        std::cout << "                     |       |         " << std::endl;
        std::cout << "                     |  外城 |         " << std::endl;
        std::cout << "                     |_" << cood[0][2] << "_____|                 " << std::endl;
        std::cout << "                        |               " << std::endl;
        std::cout << "      __________________|____________  " << std::endl;
        std::cout << "     |       |       |       |       |" << std::endl;
        std::cout << "     |黑风寨 |  小路 |  管道 |  商店 |  " << std::endl;
        std::cout << "     |__" << cood[1][0] << "____|__" << cood[1][1] << "____|__" << cood[1][2] << "____|___" << cood[1][3] << "____|" << std::endl;
        std::cout << "                        |               " << std::endl;
        std::cout << "             ___________|____          " << std::endl;
        std::cout << "            |        |       |         " << std::endl;
        std::cout << "            |    ？  |新手村 |         " << std::endl;
        std::cout << "            |___" << cood[2][1] << "____|___" << cood[2][2] << "___|         " << std::endl;
        std::cout << "                        |            " << std::endl;
        std::cout << "                     ___|___         " << std::endl;
        std::cout << "                    |       |         " << std::endl;
        std::cout << "                    |  后山 |         " << std::endl;
        std::cout << "                    |_" << cood[3][2] << "_____|         " << std::endl;
	}
    else if (id_map == 2) {
        ;
    }
    else if (id_map == 3) {
        ;
    }
}

void Map::setMap(int x, int y)
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            this->cood[i][j] = '_';
        }
    }
    this->cood[x][y] = "*";
}

void Map::changePos(char dir, int& x, int& y)
{
    if (dir == 'w') {
        x--;
    }
    else if (dir == 'a') {
        y--;
    }
    else if (dir == 's') {
        x++;
    }
    else if (dir == 'd') {
        y++;
    }
    setMap(x, y);
}
