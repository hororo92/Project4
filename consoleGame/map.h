#pragma once

#define MAPSIZEX 9
#define MAPSIZEY 9
#define MAPTOTALSIZE MAPSIZEX*MAPSIZEY

struct Position
{
	int x;
	int y;
};

enum eDirection
{
	Up = 0,
	Left,
	Down,
	Right
};

class Map
{
public:
	Map(Position startPosition);

	void move(eDirection dir);
	Position getPosition();
	void setPosition(Position position);

	void render();
private:
	int convertPositionToIndex(Position position);
	Position convertIndexToPosition(int index);
	bool isValidPosition(Position position);

private:
	int _map[MAPTOTALSIZE];
};