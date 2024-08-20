#include<iostream>
#include "map.h"

Map::Map(int id_map, int sizeX, int sizeY, int entX, int entY, int exitX, int exitY)
{
    this->id_map = id_map;
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    this->entX = entX;
    this->entY = entY;
    this->currX = entX;
    this->currY = entY;
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
        std::cout << "     |出口   |  强盗 |  官道 |  商店 |  " << std::endl;
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
        std::cout << "         _______ _______         " << std::endl;
        std::cout << "        |       |       |        " << std::endl;
        std::cout << "        |  猎户 |  衙门 |        " << std::endl;
        std::cout << " _______|___" << cood[0][1] << "___|___" << cood[0][2] << "___|_______ " << std::endl;
        std::cout << "|       |       |       |       |" << std::endl;
        std::cout << "|  出口 |  郊外 |  内城 | 貔貅阁|" << std::endl;
        std::cout << "|___" << cood[1][0] << "___|___" << cood[1][1] << "___|___" << cood[1][2] << "___|___" << cood[1][3] << "___|" << std::endl;
        std::cout << "        |       |                " << std::endl;
        std::cout << "        |  寇军 |                " << std::endl;
        std::cout << "        |___" << cood[2][1] << "___|                " << std::endl;
        std::cout << "                                 " << std::endl;
    }
    else if (id_map == 3) {
        std::cout<< " _______ _______ _______ _______"<<std::endl;
	    std::cout<< "|       |       |       |       |"<<std::endl;
	    std::cout<< "| 大帐  |  小道 |  城门 |  民居 |"<<std::endl;
	    std::cout<< "|___"<<cood[0][0]<<"___|___"<<cood[0][1]<<"___|___"<<cood[0][2]<<"___|___"<<cood[0][3]<<"___|"<<std::endl;
	    std::cout<< "        |       |       |       |"<<std::endl;
	    std::cout<< "        | 清虚观|       | 铁匠铺|"<<std::endl;
	    std::cout<< "        |___"<<cood[1][0]<<"___|       |___"<<cood[1][1]<<"___|"<<std::endl;
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

void Map::changePos(char dir)
{
    if (dir == 'w') {
        currX--;
    }
    else if (dir == 'a') {
        currY--;
    }
    else if (dir == 's') {
        currX++;
    }
    else if (dir == 'd') {
        currY++;
    }
    setMap(currX, currY);
}
