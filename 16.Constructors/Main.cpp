#include <iostream>

class Entity //����ʵ����Entity�ಢ�ҷ����ڴ��ʱ�򣬵�ʵ���ϻ�û�ж��ڴ���г�ʼ�������ڴ�ռ���˵����ԭ��������
{

public:
	float X, Y;

	//����¶������������һ��ȡ����������ͬ���ǹ��캯��û�з������ͣ����������������������һ��
	Entity()
	{
	}
	

	/*����һ����ʼ������*/
	void Init()
	{
		X = 1.0f;
		Y = 2.0f;
	}
	Entity(float x, float y)
	{
		X = x;
		Y = y;//Ҳ����˵�������ҰѲ�����ֵ���˳�Ա����
	}

	void Print() {
		std::cout << X << "," << Y << std::endl;
	}

};

class Log
{
public:
	static void Write()
	{

	}
};

int main() {
	Log::Write();
	/*Entity e; *///�������ڿ���ʹ�ò���������Entity��
	Entity e;
	
	/*e.Init();*/ //�����Ǵ���Entity��ʱ��Ҫ����������ʱ���Ҫ�����캯���ˣ�����һ���������͵ķ�������Ҫ������������ 
	e.Print();
	std::cin.get();
}