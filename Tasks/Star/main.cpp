#include <iostream>
#include <windows.h>
using namespace std;

const int Speed = 60;

class CPoint
{
private:
    int x;
    int y;
    int Vx;
    int Vy;
public:
    void Moving()
    {
        x=x+Vx;
        y=y+Vy;
    }
    CPoint(int tx, int ty)
    {
        x = tx;
        y = ty;
        Vx = 1;
        Vy = 1;
    }
    void Cheks(CPoint point2)
    {
        if(x==0 and y==0)
        {
            Vx =- Vx;
            Vy =- Vy;
        }
        if(x==1) Vx =- Vx;
        if(x==79)
        {
            Vx =+ Vx;
            Vy =+ Vy;
        }
        if(x==78 and y!=25) Vx =- Vx;
        if(x==78 and y==25)
        {
            Vx =- Vx;
            Vy =- Vy;
        }
        if(x!=78 and y==25) Vy =- Vy;
        if(y==25)
        {
            Vx =+ Vx;
            Vy =+ Vy;
        }
        if(y==1 and x!=0) Vy =- Vy;
    }
    void Cheks_colusions(CPoint point2)
    {
        if(this->x == point2.x or point2.x == this->x)
        {
            Vx =- Vx;
            Vy =+ Vy;
            point2.Vx =+ 1;
            point2.Vy =- 1;
        }
    }
    int Getx()
    {
        return x;
    }
    int Gety()
    {
        return y;
    }
};

void setCursorPosition(int x, int y)
{
    COORD position = {x,y};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}

void setCursorPosition1(CPoint point2)
{
    COORD position = {point2.Getx(),point2.Gety()};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}

void setCursorPosition(CPoint point)
{
    COORD position = {point.Getx(),point.Gety()};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}


void Walls()
{
    int y=0,x=0;
    while(y<26)
    {
        setCursorPosition(x,y);
        cout << '|';
        y++;
    }
    while(x<79)
    {
        setCursorPosition(x,y);
        cout << '-';
        x++;
    }
    while(y!=0)
    {
        setCursorPosition(x,y);
        cout << '|';
        y--;
    }
    while(x>0)
    {
        setCursorPosition(x,y);
        cout << '-';
        x--;
    }
}

int main()
{
    int tx = 1, ty = 1;
    CPoint point(tx,ty);
    tx = 76;
    ty = 1;
    CPoint point2(tx,ty);
    Walls();
    while(GetAsyncKeyState(VK_ESCAPE) == 0)
    {
        setCursorPosition(point);
        cout << '@';
        Sleep(Speed);
        setCursorPosition(point);
        cout << ' ';
        point.Moving();
        point.Cheks(point);
        ///====================================
        setCursorPosition1(point2);
        cout << '*';
        Sleep(Speed);
        setCursorPosition1(point2);
        cout << ' ';
        point2.Moving();
        point2.Cheks(point2);
        point.Cheks_colusions(point2);
        ///===================================
    }
}
