#include <iostream>

class Entity
{

public:
	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f; 
		std::cout << "Constructed Entity" << std::endl;
	}


	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl; 
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

void Function()
{
	Entity e;
	e.Print();
}

int main() { 
	Function();
	std::cin.get();
}