#include <iostream>

class Single{
public:
	static Single& Get() {
		static Single instance;
		return instance; 
	}//һ��������Ϊget,����һ��single���ʵ������
	
	void Hello(){}
};

int main() {				
	Single::Get().Hello();
	std::cin.get();
}