#include <iostream>
using namespace std;
#define Log(x) cout<<x<<endl;

 void Increment(int& value) {
	value++;
}

int main() {
	int a = 5;
	int b = 8;

	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;
	Log(a);
	Log(b);
	Increment(a);
	Log(a);
	cin.get();
}