#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <vector> // stl 
#include <iostream>

#define MAPSIZEX (9)
#define MAPSIZEY (9)
#define MAPTOTALCOUNT MAPSIZEX * MAPSIZEY

using namespace std;
struct mkPosition
{
	int x;
	int y;
};
int setPosition(mkPosition position, int* map, int value)
{
	if (x < 0 || y < 0 || x >= MAPSIZEX || y >= MAPSIZEY)
	{
		return -1;
	}
	map[x + y * MAPSIZEX] = value;
	return 0;
}

mkPosition getPosition(int* x, int* y, int* map)
{
	for (int i = 0; i < MAPTOTALCOUNT; i++)
	{
		if (map[i] == 1)
		{
			*x = i % MAPSIZEX;
			*y = i / MAPSIZEX;
			map[i] = 0;
			return;
		}
	}
}

void main()
{
	/*int value = 2;
	*(&value) = 3;
	value = 3;*/

	//&value : value의 주솟값
	//*pointer : pointer가 가리키는 값

	//int value = 5;
	//int* addressOfValue = &value;
	//*addressOfValue = 6;
	//printf("%d", value);

	int map[MAPTOTALCOUNT] = { 0, };
	int* address = &map[0];
	int* address2 = map;

	//map[4 * MAPSIZEX + 4] = 1;

	int result = setPosition(4, 4, map, 1); // ctrl+shift + space
	//if (result == -1)
	//{
	//	printf("문제가 있씁니다.!!\n");
	//}
	int x;
	int y;
	system("cls");
	for (int j = 0; j < MAPSIZEY; j++)
	{
		getPosition(&x, &y, map);
		setPosition(x, y, map, 1);
		for (int i = 0; i < MAPSIZEX; i++)
		{
			if (i == x && j == y) {
				cout << "■";
			}
			else
			{
				cout << "□";
			}
		}
		cout << endl;
	}

	vector<int> retValue;
	while (true)
	{
		if (_kbhit() != 0)
		{
			int keyValue = _getch();
			if (keyValue == 27)
			{
				break;
			}
			if (keyValue == 119) // w누름
			{
				getPosition(&x, &y, map);
				if (-1 == setPosition(x, y-1, map, 1))
				{
					setPosition(x, y, map, 1);
				}
			}
			else if (keyValue == 97) // a
			{

				getPosition(&x, &y, map);
				if (-1 == setPosition(x - 1, y, map, 1))
				{
					setPosition(x, y, map, 1);
				}
			}
			else if (keyValue == 115) // s
			{

				getPosition(&x, &y, map);
				if (-1 == setPosition(x, y+1, map, 1))
				{
					setPosition(x, y, map, 1);
				}
			}
			else if (keyValue == 100) //d
			{

				getPosition(&x, &y, map);
				if (-1 == setPosition(x +1, y, map, 1))
				{
					setPosition(x, y, map, 1);
				}
			}
			system("cls");
			for (int j = 0; j < MAPSIZEY; j++)
			{
				getPosition(&x, &y, map);
				setPosition(x, y, map, 1);
				for (int i = 0; i < MAPSIZEX; i++)
				{
					if (i == x && j == y) {
						cout << "■";
					}
					else
					{
						cout << "□";
					}
				}
				cout << endl;
			}
		}
	}

	size_t vectorCount = retValue.size();

	for (size_t i = 0; i < vectorCount; i++)
	{
		cout << i << "번째 값은 : " << retValue[i] << "입니다" << endl;
	}

	system("pause");
}