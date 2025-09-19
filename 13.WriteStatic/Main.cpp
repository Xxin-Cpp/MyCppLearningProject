#include <iostream>

struct Entity{	//默认public
	static int x, y;
	void Print() 
	{
		std::cout << x << "," << y << std::endl;
	}
};

int Entity::x;
int Entity::y;


int main() {
	Entity e; //实例化
	e.x = 2;
	e.y = 3;

	/*Entity e1 = {5,8};*///创建另一个实例并初始化
	Entity e1;
	e1.x = 5;
	e1.y = 8;

	e.Print();
	e1.Print();


	std::cin.get();
}