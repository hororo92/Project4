#include "map.h"
#include <iostream>
using namespace std;


Map::Map(Position startPosition)
{
	for (int i = 0; i < MAPTOTALSIZE; i++)
	{
		_map[i] = 0;
	}
	_map[startPosition.x + MAPSIZEX * startPosition.y] = 1;
}

void Map::move(eDirection dir)
{
	Position currentPosition = getPosition();
	switch (dir)
	{
	case Up:
		
		if (currentPosition.y != 0)
		{
			currentPosition.y -= 1;
			setPosition(currentPosition);
		}
		break;
	case Left:
		if (currentPosition.x != 0)
		{
			currentPosition.x -= 1;
			setPosition(currentPosition);
		}
		break;
	case Down:
		if (currentPosition.y != MAPSIZEY-1)
		{
			currentPosition.y += 1;
			setPosition(currentPosition);
		}
		break;
	case Right:
		if (currentPosition.x != MAPSIZEX-1)
		{
			currentPosition.x += 1;
			setPosition(currentPosition);
		}
		break;
	default:
		break;
	}
}

Position Map::getPosition()
{
	Position retPosition = { -1, -1 };
	for (int i = 0; i < MAPTOTALSIZE; i++)
	{
		if (_map[i] == 1)
		{
			retPosition = convertIndexToPosition(i);
			break;
		}
	}
	return retPosition;
}

void Map::setPosition(Position position)
{
	int index = convertPositionToIndex(position);

	for (int i = 0; i < MAPTOTALSIZE; i++)
	{
		_map[i] = 0;
	}
	_map[index] = 1;
}

void Map::render()
{
	system("cls");
	for (int y = 0; y < MAPSIZEY; y++)
	{
		for (int x = 0; x < MAPSIZEX; x++)
		{
			Position curPos = { x, y };
			if (_map[convertPositionToIndex(curPos)] == 0)
			{
				cout << "бр";
			}
			else
			{
				cout << "бс";
			}
		}
		cout << endl;
	}
}

int Map::convertPositionToIndex(Position position)
{
	if (false == isValidPosition(position))
	{
		return -1;
	}
	return position.x + position.y * MAPSIZEX;
}

Position Map::convertIndexToPosition(int index)
{
	Position retValue;
	retValue.x = index%MAPSIZEX;
	retValue.y = index/MAPSIZEX;
	return retValue;
}



bool Map::isValidPosition(Position position)
{
	return (position.x < MAPSIZEX && position.x >= 0) && (position.y < MAPSIZEY && position.y >= 0);
}
