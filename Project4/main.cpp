
#include <stdio.h>
#include <Windows.h>
//함수

//반환형 함수명(매개변수) {구현부};

#define MAPSIZEX (9)
#define MAPSIZEY (9)
#define MAPTOTALCOUNT MAPSIZEX * MAPSIZEY


void function1();

void function2();

void function1()
{
	function2();
}

void function2()
{
	function1();
}

int plus(int a, int b /*파라미터*/);





int plus(int a, int b /*파라미터*/)
{
	return a + b;
}
//
//enum Direction : unsigned char
//{
//	Left = 0,
//	Up,
//	Right,
//	Down
//};

int main()
{
	/*Direction a = Left;
	unsigned char a = Left;

	switch (a)
	{
	case Left:
		break;
	case Up:
		break;
	case Right:
		break;
	case Down:
		break;
	default:
		break;
	}*/
//{
//	//조건문, 제어문
//	int a = 1;
//	if (a > 5)
//	{
//
//	}
//	else if(a > 2)
//	{
//
//	}
//	else
//	{
//
//	}
//
//	int b;
//	if (b == 0)
//	{
//
//	}
//	else if (b == 1)
//	{
//
//	}
//	else if (b == 2)
//	{
//
//	}
//	else
//	{
//
//	}


	int b = 10;
	switch (b)
	{
	case 10:
	{
		printf("점수는 10점 입니다.\n");
	}
	case 20:
		printf("점수는 20점 입니다.\n");
	case 30:
		printf("점수는 30점 입니다.\n");
	default:
		break;
	}
	//int a = 0;
	//while (/*조건*/true)
	//{
	//	a++;

	//	if (a >= 10)
	//	{
	//		continue;
	//	}
	//	if (a >= 10)
	//	{
	//		break;
	//	}
	//}

	//do
	//{

	//} while (true);

	//for (int b = 0; b < 10; b++)
	//{

	//}

	int arr[100] = {};
	for (int i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}
	//int arr[5];
	//arr[0] = 1;
	//arr[1] = 2;
	//arr[2] = 3;
	//arr[3] = 4;
	//arr[4] = 5;
	//arr[5] = 6;
	//..
	//	arr[99] = 100;


	/*int mapSizeX = 9;
	int mapSizeY = 9;*/

	int map[81] = { 0, };
	map[4*MAPSIZEX+4] = 1;

	system("pause");
	return 0;
}