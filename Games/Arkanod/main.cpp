#include <iostream>
#include <windows.h>
using namespace std;

int Gamespeed = 60;

class CP
{
private:
    int x;
    int y;
    int Vx;
    int Vy;
public:
///Конструктор
///===========================================
    CP()
    {
        x = 30;
        y = 23;
        Vx = 1;
        Vy = 1;
    }
    CP(int nx, int ny)
    {
        x = nx;
        y = ny;
        Vx = 2;
        Vy = 2;
    }
///============================================
///Функции
///============================================
    void Move_R()
    {
        x += Vx;
    }
    void Move_L()
    {
        x -= Vx;
    }
///=============================================
///Функция проверяет наличие столкновения
///=============================================
    void Cheks()
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
///===============================================
///Функции возвращают значения
///===============================================
    int GetX()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }
///===============================================
};
///Функция
///========================================================
void setCursorPosition(int x,int y)
{
    COORD position = {x,y};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}
void setCursorPosition(CP player)
{
    COORD position = {player.GetX(),player.GetY()};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}
///=========================================================
///Функция рисует поле
///==============================================
void PointMap()
{
    int x=0,y=0;
    while(y<24)
    {
        setCursorPosition(x,y);
        cout << '#';
        y++;
    }
    while(x<79)
    {
        setCursorPosition(x,y);
        cout << '#';
        x++;
    }
    while(y>0)
    {
        setCursorPosition(x,y);
        cout << '#';
        y--;
    }
    while(x>0)
    {
        setCursorPosition(x,y);
        cout << '#';
        x--;
    }
}
///================================================

int main()
{
    CP player;
    int nx = 5;
    int ny = 5;
    CP Star;
    PointMap();
    while(true)
    {
        while(GetAsyncKeyState(VK_ESCAPE) == 0)
        {
            setCursorPosition(player);
            cout << "_____________";
            Sleep(Gamespeed);
            setCursorPosition(player);
            cout << "             ";
            if(GetAsyncKeyState(VK_RIGHT) != 0)
            {
                player.Move_R();
            }
            if(GetAsyncKeyState(VK_LEFT) != 0)
            {
                player.Move_L();
            }
        }
    }
}
