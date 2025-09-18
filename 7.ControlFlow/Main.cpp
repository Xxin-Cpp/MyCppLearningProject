#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 5; i++) 
	{       
		if ((i+1) % 2 == 0 )
			return 0 ;
		cout << "hello world" << endl;	 
		cout << i << endl;
	}			               
}