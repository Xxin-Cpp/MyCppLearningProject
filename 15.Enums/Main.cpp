#include <iostream>

enum Example : unsigned char //枚举值的默认类型是32位的整数 
							//你还可以指定你的枚举值的数据类型
						   //在这个例子中，没必要用32位的值，可以用8位的整数，unsigned char
						  //必须要用整形							
{
	A = 5, B , C//如果想把它设置成不是从0开始的，比如说5，那么接下来没有指定的变量值会从5开始递增
}; //关于为什么enum里面是大写，因为不能重复，不然编译器怎么知道A是全局变量还是枚举成员

int a = 0;
int b = 1;
int c = 2;
//我们可以定义一种数据类型，使它的值只能是三个中的某一个值
//而且可以把这些数据组合起来：这就是枚举的使用场景了

//int main() {
//	//这里不能用int作为类型，可以用枚举的名称作为一个实际的类型
//	//写一个Example类型的值，给Value赋值
//	/*int Value = b;*/
//	Example Value = B;
//
//
//	if (Value == 1)
//	{
//		std::cout << "Yep" << std::endl;
//	}
//
//	std::cin.get();
//}