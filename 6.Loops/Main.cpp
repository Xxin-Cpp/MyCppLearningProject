#include <iostream>
using namespace std; 

int main() {
	bool con = false;
	for (int i = 0; i < 5; i++) {         //�������������֣�ÿ�����ԷֺŸ���1.�Ǳ�������һ����ʱ����i�Ǵ�ͳ
		cout << "hello world" << endl;	 //�ڶ���������������������ʱ��һֱִ��forѭ����Ĵ���
	}					                //������������һ��forѭ��ǰ��ִ�еĴ���	
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