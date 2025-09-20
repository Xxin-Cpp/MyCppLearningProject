#include <iostream>

class Single{
public:
	static Single& Get() {
		static Single instance;
		return instance; 
	}//一个方法名为get,返回一个single类的实例引用
	
	void Hello(){}
};

int main() {				
	Single::Get().Hello();
	std::cin.get();
}