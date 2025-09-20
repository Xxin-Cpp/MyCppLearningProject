#include <iostream>

class Entity
{
public:
    //����˵��Ϸ��ÿ��Entity������2������������ʾλ������
    float X, Y;

    //Ȼ���������ÿ��Entity�ƶ�������
    void Move(float xa, float ya)//����Ϊxa��ya��������ʾ������Ҫ�ƶ�����
    {
        X += xa; //ȡ����ǰ����� X ֵ,���ϲ��� xa,�ٰѽ����� X
        Y += ya;
    };
};//��������һ��Entity���ࣨ���ࣩ������˵��Ϸ�ﴴ����ÿ��Entityʵ�����о�������ԣ����Ǵ����������͵�Entity,����˵Player

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