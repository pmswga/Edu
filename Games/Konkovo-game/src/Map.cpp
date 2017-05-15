#include "Map.h"


Map::Map(int width, int height, char fill_sybmol)
{
	this->w = width;
	this->h = height;

	this->map = new char* [height];

	for (int i = 0; i < height; i++)
	{
		this->map[i] = new char[width];
	}

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			this->map[i][j] = fill_sybmol;

}

Map::~Map()
{
	for (int i = 0; i < h; i++) {
		delete this->map[i];
	}
}

void Map::show()
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			cout << this->map[i][j];

		cout << '\n';
	}
}

char Map::get(int x, int y)
{
	if ((x <= w && x >= 0) && (y <= h && y >= 0))
	{
	   return this->map[y][x];
	}
}

void Map::put(int x, int y, char symbol)
{
	if ((x <= w && x >= 0) && (y <= h && y >= 0))
	{
		this->map[y][x] = symbol;
	}
}

void Map::setCursorPosition(int x, int y, char symbol)
{
    COORD position = {x,y};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);

    cout << symbol;
}
