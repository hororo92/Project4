#include <iostream>
#include <Windows.h>
using namespace std;

//���� �����ڸ� �ٸ�
//���� ������ : private, public, protected
struct myStruct // �⺻�� public
{
	int a;
	int b;
};

class myClass // �⺻�� private
{
private:
	float a;
	float b;
};

class point
{
private:
	int _x; // �������
	int _y;

public:
	void setX(int x) // �޼ҵ� == ����Լ�
	{
		_x = x;
	}

	void setY(int y)
	{
		_y = y;
	}

	int getX()
	{
		return _x;
	}
};
class triangle
{
private:
	point _p1;
	point _p2;
	point _p3;
	float _size;
};

void main()
{
	point p1;
	point p2;
	p1.setX(10);
	p1.setY(20);

	int value = p1.getX();
	system("pause");
}