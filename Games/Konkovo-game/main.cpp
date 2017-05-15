#include <iostream>
#include <conio.h>
#include "map.h"
using namespace std;

enum KEY_PRESSED{
    KEY_LEFT = 75,
    KEY_RIGHT = 77,
    KEY_UP = 72,
    KEY_DOWN = 80
};

enum MOVE_DIRECTION{
    LEFT,
    RIGHT,
    UP,
    DOWN
};

class Player
{
    int x, y;
    int speed;
    char symbol;

public:
    Player(char symbol)
    {
        this->symbol = symbol;
        this->x = 0;
        this->y = 0;
        this->speed = 1;
    }

    void move(MOVE_DIRECTION direction)
    {
        switch(direction)
        {
            case UP: this->y -= speed; break;
            case DOWN: this->y += speed; break;
            case LEFT: this->x -= speed; break;
            case RIGHT: this->x += speed; break;
        }
    }

    char getSymbol()
    {
        return this->symbol;
    }

    int getX()
    {
        return this->x;
    }

    int getY()
    {
        return this->y;
    }

};

int main()
{
    Map game_map(50, 24);
    Player ser('S');

    game_map.show();

    while(true)
    {
        switch(getch())
        {
        case KEY_UP:
            {
                ser.move(UP);
            } break;
        case KEY_DOWN:
            {
                ser.move(DOWN);
            } break;
        case KEY_LEFT:
            {
                ser.move(LEFT);
            } break;
        case KEY_RIGHT:
            {
                ser.move(RIGHT);
            }
        }

        game_map.setCursorPosition(ser.getX(), ser.getY(), ser.getSymbol());
    }

}
