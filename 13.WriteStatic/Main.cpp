#include <iostream>

struct Entity{	//Ĭ��public
	static int x, y;
	void Print() 
	{
		std::cout << x << "," << y << std::endl;
	}
};

int Entity::x;
int Entity::y;


int main() {
	Entity e; //ʵ����
	e.x = 2;
	e.y = 3;

	/*Entity e1 = {5,8};*///������һ��ʵ������ʼ��
	Entity e1;
	e1.x = 5;
	e1.y = 8;

	e.Print();
	e1.Print();


	std::cin.get();
}