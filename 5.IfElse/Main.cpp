#include <iostream>
using namespace std;

int main() {
	const char* ptr = "Hello";
	//int x = 5;
	//bool com = x == 5; 
	if (ptr) {
		cout << "Ptr is eff" << endl;
	}
	
	else if (ptr=="Hello"){
		cout << "Ptr is"<<ptr << endl;
	}

	cin.get();
}