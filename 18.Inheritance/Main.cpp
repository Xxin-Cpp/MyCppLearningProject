#include <iostream>

class Entity
{
public:
    //比如说游戏里每个Entity都有用2个浮点数来表示位置属性
    float X, Y;

    //然后我们想给每个Entity移动的能力
    void Move(float xa, float ya)//参数为xa和ya，用来表示我们想要移动的量
    {
        X += xa; //取出当前对象的 X 值,加上参数 xa,再把结果存回 X
        Y += ya;
    };
};//我们有了一个Entity基类（父类），可以说游戏里创建的每个Entity实例都有具体的特性，我们创建个新类型的Entity,比如说Player

class Player : public Entity
{

public:
    const char* Name;

    void PrintName()
    {
        std::cout << Name << std::endl;
    }

};

int main()
{
    std::cout << sizeof(Player) << std::endl;
    Player player;
    std::cin.get();
}