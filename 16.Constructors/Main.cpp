#include <iostream>

class Entity //我们实例化Entity类并且分配内存的时候，但实际上还没有对内存就行初始化，对内存空间来说还是原来的内容
{

public:
	float X, Y;

	//我们露像定义其他方法一样取定义它，不同的是构造函数没有返回类型，而且它的命名必须和类名一样
	Entity()
	{
	}
	

	/*创建一个初始化方法*/
	void Init()
	{
		X = 1.0f;
		Y = 2.0f;
	}
	Entity(float x, float y)
	{
		X = x;
		Y = y;//也就是说在这里我把参数赋值给了成员变量
	}

	void Print() {
		std::cout << X << "," << Y << std::endl;
	}

};

class Log
{
public:
	static void Write()
	{

	}
};

int main() {
	Log::Write();
	/*Entity e; *///我们现在可以使用参数来构造Entity了
	Entity e;
	
	/*e.Init();*/ //当我们创建Entity的时候都要调用他，这时候就要看构造函数了，他是一种特殊类型的方法，主要就是用在这里 
	e.Print();
	std::cin.get();
}