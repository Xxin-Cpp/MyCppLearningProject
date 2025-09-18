#include <iostream>
using namespace std;

int Multiply(int a, int b) {

}

int MultiplyAndLog(int a,int b){
	int result = Multiply(a,b);
	cout << result << endl;
}

int main() {
	Multiply(3, 2);
	cin.get();
	return 0;
}