#include"Goods.h"

class Store {
private:
	Goods a;
public:
	void getgoods(char* goodsname, int bill);
	void soldgoods(char* goodsname, int bill);
	void showgoods();
};
