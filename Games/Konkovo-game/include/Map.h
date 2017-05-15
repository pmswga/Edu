#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <windows.h>
using namespace std;


class Map
{
	int w, h;
	char **map;

public:
	Map(int width, int height, char fill_sybmol = '#');
	~Map();

	void show();

	char get(int x, int y);
	void put(int x, int y, char symbol);

	void setCursorPosition(int x, int y, char symbol);

};

#endif
