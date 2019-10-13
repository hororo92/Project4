#include <iostream>
#include <Windows.h>
using namespace std;

//접근 지정자만 다름
//접근 지정자 : private, public, protected
struct myStruct // 기본이 public
{
	int a;
	int b;
};

class myClass // 기본이 private
{
private:
	float a;
	float b;
};

class point
{
private:
	int _x; // 멤버변수
	int _y;

public:
	void setX(int x) // 메소드 == 멤버함수
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