#include <iostream>  

using namespace std;

/*void printMap() {  
    std::cout << "生子笔记\n";  
    std::cout << "┌─────────┐\n";  
    std::cout << "│   外城   │\n";  
    std::cout << "├─────────┤\n";  
    std::cout << "│  官道    │\n";  
    std::cout << "├─────────┤\n";  
    std::cout << "│  行商地点 │\n";  
    std::cout << "└─────────┘\n";  
    std::cout << "    │\n";  
    std::cout << "    ▼\n";  
    std::cout << "┌─────────┐\n";  
    std::cout << "│  山野小路 │\n";  
    std::cout << "└─────────┘\n";  
    std::cout << "    │\n";  
    std::cout << "    ▼\n";  
    std::cout << "┌─────────┐\n";  
    std::cout << "│  新手村  │\n";  
    std::cout << "└─────────┘\n";  
    std::cout << "    │\n";  
    std::cout << "    ▼\n";  
    std::cout << "┌─────────┐\n";  
    std::cout << "│  决战    │\n";  
    std::cout << "└─────────┘\n";  
} */ 

/*void printMap(){
	std::cout<< "				 _______		 "<<endl;
	std::cout<< "	  	|		|		|		|"<<endl;
	std::cout<< "				|_______|		"<<endl;
	std::cout<< "	   	|		|	|	|		|"<<endl;
	std::cout<< "_______|_______|___|___|_______|"<<endl;
	std::cout<< "		|		|		|		|"<<endl;
	std::cout<< "_______|_______|_______|_______|"<<endl;
	std::cout<< "		|		|	|	|		|"<<endl;
	std::cout<< "		|_______|___|___|		|"<<endl;
	std::cout<< "		|		|		|		|"<<endl;
	std::cout<< "		|_______|_______|		|"<<endl;
	std::cout<< "		|		|	|	|		|"<<endl;
	std::cout<< "		|		|___|___|		|"<<endl;
	std::cout<< "		|		|		|		|"<<endl;
	std::cout<< "		|		|_______|		|"<<endl;
	std::cout<< "		|		|		|		|"<<endl;
	std::cout<< "		|		|		|		|"<<endl;
	
}*/
#include <iostream>  

void printMap() {  
    std::cout << "                      _______          " << std::endl;  
    std::cout << "                     |       |         " << std::endl;  
    std::cout << "                     |  外城 |         " << std::endl;
    std::cout << "                     |_______|                 " << std::endl;  
    std::cout << "                        |               " << std::endl;  
    std::cout << "      __________________|____________  " << std::endl;  
    std::cout << "     |	   |	   |	   |	   |" << std::endl; 
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
}  


int main() {  
    printMap();  
    return 0;  
}