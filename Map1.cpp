/*void printMap() {  
    std::cout << "                      _______          " << std::endl;  
    std::cout << "                     |       |         " << std::endl;  
    std::cout << "                     |  外城 |         " << std::endl;
    std::cout << "                     |_______|                 " << std::endl;    
    std::cout << "                        |               " << std::endl;  
    std::cout << "      __________________|____________  " << std::endl;  
    std::cout << "     |       |       |       |       |" << std::endl; 
	std::cout << "     |黑风寨 |  小路 |  管道 |  商店 |  " << std::endl;  
    std::cout << "     |_______|_______|_______|_______|" << std::endl;  
    std::cout << "                        |               " << std::endl;  
    std::cout << "             ___________|____          " << std::endl;  
    std::cout << "            |        |       |         " << std::endl;  
    std::cout << "            |    ？  |新手村 |         " << std::endl;  
    std::cout << "            |________|_______|         " << std::endl;  
    std::cout << "                        |            " << std::endl;  
    std::cout << "                     ___|___         " << std::endl;  
    std::cout << "                    |       |         " << std::endl;  
    std::cout << "                    |  后山 |         " << std::endl;  
    std::cout << "                    |_______|         " << std::endl;  
}  */
#include <iostream>  
#include <cstring>

using namespace std; 

string Map1[4][4];

static int x=3;   //x,y为当前所在位置，这里为起始位置
static int y=2;

void printMap() {  
    std::cout << "                      _______          " << std::endl;  
    std::cout << "                     |       |         " << std::endl;  
    std::cout << "                     |  外城 |         " << std::endl;
    std::cout << "                     |_"<<Map1[0][2]<<"_____|                 " << std::endl;    
    std::cout << "                        |               " << std::endl;  
    std::cout << "      __________________|____________  " << std::endl;  
    std::cout << "     |       |       |       |       |" << std::endl; 
	std::cout << "     |黑风寨 |  小路 |  管道 |  商店 |  " << std::endl;  
    std::cout << "     |__"<<Map1[1][0]<<"____|__"<<Map1[1][1]<<"____|__"<<Map1[1][2]<<"____|___"<<Map1[1][3]<<"___|" << std::endl;  
    std::cout << "                        |               " << std::endl;  
    std::cout << "             ___________|____          " << std::endl;  
    std::cout << "            |        |       |         " << std::endl;  
    std::cout << "            |    ？  |新手村 |         " << std::endl;  
    std::cout << "            |___"<<Map1[2][1]<<"____|___"<<Map1[2][2]<<"___|         " << std::endl;  
    std::cout << "                        |            " << std::endl;  
    std::cout << "                     ___|___         " << std::endl;  
    std::cout << "                    |       |         " << std::endl;  
    std::cout << "                    |  后山 |         " << std::endl;  
    std::cout << "                    |_"<<Map1[3][2]<<"_____|         " << std::endl;  
} 

void setMap1(int x,int y)   //x,y为当前位置
{
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			Map1[i][j]='_';
		}
	}
	Map1[x][y]="*";
}

void changePos(char dir,int &x,int &y)    //dir是direction的缩写，表示方向
{
	if(dir=='w'){
		x--;	
	}
	else if(dir=='a'){
		y--;	
	}
	else if(dir=='s'){
		x++;	
	}
	else if(dir=='d'){
		y++;	
	}
	setMap1(x,y);
}

int main() {  
	setMap1(x,y);
    printMap();
	char direction; 
	cin>>direction;
	changePos(direction,x,y); 
	printMap();
    return 0; 
}
