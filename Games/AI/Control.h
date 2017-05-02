#ifndef CONTROL_H_INCLUDED
#define CONTROL_H_INCLUDED

#include "Lib.h"
#include "Map.h"
using namespace std;



void Up(int x, int y)
{
    int y2 = (y - 1);
    switch(Map[y2][x])
    {
        case ' ':
        {
            Map[y][x] = ' ';
            y -= 1;
            Map[y2][x] = '$';
        }break;
        case '!':
        {
            level = 2;
        }break;
        case '*':
        {
            HP -= 10;
            Map[y][x] = ' ';
            y -= 1;
            Map[y2][x] = '$';
        }break;
    }
}

void Down(int x, int y)
{
    int y2 = (y + 1);
    switch(Map[y2][x])
    {
        case ' ':
        {
            Map[y][x] = ' ';
            y += 1;
            Map[y2][x] = '$';
        }break;
        case '!':
        {
            level = 2;
        }break;
        case '*':
        {
            HP -= 10;
            Map[y][x] = ' ';
            y += 1;
            Map[y2][x] = '$';
        }break;
    }
}



void Right(int x, int y)
{
    int x2 = (x+1);
    switch(Map[y][x2])
    {
        case ' ':
        {
            Map[y][x] = ' ';
            x += 1;
            Map[y][x2] = '$';
        }break;
        case '!':
        {
            level = 2;
        }break;
        case '*':
        {
            HP -= 10;
            Map[y][x] = ' ';
            x += 1;
            Map[y][x2] = '$';
        }break;
    }
}


void Left(int x, int y)
{
    int x2 = (x-1);
    switch(Map[y][x2])
    {
        case ' ':
        {
            Map[y][x] = ' ';
            x -= 1;
            Map[y][x2] = '$';
        }break;
        case '!':
        {
            level = 2;
        }break;
        case '*':
        {
            HP -= 10;
            Map[y][x] = ' ';
            x -= 1;
            Map[y][x2] = '$';
        }break;
    }
}


#endif
