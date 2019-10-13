#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "map.h"
using namespace std;



bool update();
void render();
Position startPosition = { 4, 4 };
Map g_map(startPosition);
void main()
{
	render();
	while (true)
	{
		if (false == update())
		{
			break;
		}
		
	}

	system("pause");
}

bool update()
{
	if (_kbhit() != 0)
	{

		int inputValue = _getch();
		if (inputValue == 27)
		{
			cout << "Á¾·á" << endl;
			return false;
		}
		eDirection dir;
		switch (inputValue)
		{
			case 119:
				dir = Up;
				break;
			case 97	:
				dir = Left;
				break;
			case 115:
				dir = Down;
				break;
			case 100:
				dir = Right;
				break;
		}
		g_map.move(dir);
		render();
	}
	return true;
}

void render()
{
	g_map.render();
}
