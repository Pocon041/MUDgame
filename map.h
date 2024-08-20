#include<cstring>

class Map {
public:                      //为了方便我都写public了
	int id_map;    //地图的编号
	int entX;   //起点位置   X代表行数，Y代表列数
	int entY;   //起点位置
	int exitX;  //终点位置
	int exitY;  //终点位置
	int sizeX;  //地图大小
	int sizeY;  //地图大小
	std::string cood[5][5];   //坐标数组，用来记录每个地点的坐标。
	
	Map(int id_map,int sizeX,int sizeY,int entX,int entY,int exitX, int exitY);
	void printMap(int id_map);
	void setMap(int x, int y);					//x,y为当前位置,用于改变当前所在位置
	void changePos(char dir, int& x, int& y);	//dir是direction的缩写，表示方向。用于转化wasd指令
};
