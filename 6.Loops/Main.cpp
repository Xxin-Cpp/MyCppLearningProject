#include <iostream>
using namespace std; 

int main() {
	bool con = false;
	for (int i = 0; i < 5; i++) {         //括号内有三部分，每部分以分号隔开1.是变量声明一个临时变量i是传统
		cout << "hello world" << endl;	 //第二部分是条件满足条件的时候一直执行for循环里的代码
	}					                //第三部分是下一次for循环前会执行的代码	
	int i = 0;
	cout << "=================================" << endl;
	
	while (i<5) {
		cout << "hello world" << endl;
		i++;
	}
	
	do {
		cout << "hello world" << endl;
	} while (con);
	cin.get();
}