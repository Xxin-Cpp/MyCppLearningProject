#include <iostream> 
using namespace std;
#define Log(x) cout<<x<<endl;

class Player { 
public: 
	int x, y; 
	int speed; 
	
	void Move(int xa, int ya) { 
		x += xa * speed; 
		y += ya * speed; 
	}
};

int main() { 
	Player player; //创建类的对象
	player.Move(1, -1); 
	cin.get(); 
}