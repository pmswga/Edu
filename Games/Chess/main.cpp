#include "Lib.h"
#include "Control.h"
#include "Map.h"
///Игровые настройки
///=============================
int y; int y2;
int x; int x2;
int level = 1;
int Gamespeed = 125;
///================================

///Игровые данные
///==================================
int HP = 100;
int Score = 0;
///====================================

int main()
{
    setlocale(LC_ALL,"RUS");
    while(level == 1)
    {
        system("cls");
        cout << "Очков: " << Score << " | " << "Уровень: " << level << " | " << "Жизни: " << HP << '\n';
        for(y=0; y<9; y++) cout << Map[y] << '\n';
        for(y=0; y<9; y++)
            for(x=0; x<60; x++)
            {
///Моб
///=============================================================================
                switch(Map[y][x])
                {
                    case '*':
                    {
                        srand(time(0));
                        int i = rand() & 2;
                        if(i == 0)
                        {
                            int x2 = (x+1);
                            switch(Map[y][x2])
                            {
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    x += 1;
                                    Map[y][x2] = '*';
                                }break;
                                case '$': HP -= 10; break;
                            }

                        }
                        else
                        {
                            int x2 = (x-1);
                            switch(Map[y][x2])
                            {
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    x -= 1;
                                    Map[y][x2] = '*';
                                }break;
                                case '$': HP -= 10; break;
                            }
                        }
                    }
                }
///===================================================================================
                switch(Map[y][x])
                {
                case '$':
                    {
                        Exit_game(HP);
                        Game_Over(HP);
///Гравитация
///=================================================================================
                        y2 = (y + 1);
                        switch(Map[y2][x])
                        {
                            case ' ':
                            {
                                Map[y][x] = ' ';
                                y += 1;
                                Map[y2][x] = '$';
                            }break;
                            case '!': level = 2; break;
                            case '^': Game_Over(); break;
                            case '@':
                            {
                                Score += 10;
                                Map[y][x] = ' ';
                                y += 1;
                                Map[y2][x] = '$';
                            }break;
                            case '*':
                            {
                                Map[y][x] = ' ';
                                y += 1;
                                Map[y2][x] = '$';
                            }break;
                        }
///====================================================================================
                        if(GetAsyncKeyState(VK_SPACE) != 0)
                        {
                            y2 = (y - 3);
                            switch(Map[y2][x])
                            {
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    y -= 3;
                                    Map[y2][x] = '$';
                                }break;
                                case '!': level = 2; break;
                                case '^': Game_Over(); break;
                                case '@':
                                {
                                    Score += 10;
                                    Map[y][x] = ' ';
                                    y -= 1;
                                    Map[y2][x] = '$';
                                }break;
                            }
                        }
                        if(GetAsyncKeyState(VK_RIGHT) != 0)
                        {
                            x2 = (x+1);
                            switch(Map[y][x2])
                            {
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    x += 1;
                                    Map[y][x2] = '$';
                                }break;
                                case '!': level = 2; break;
                                case '^': Game_Over(); break;
                                case '*': HP -= 10; break;
                                case '@':
                                {
                                    Score += 10;
                                    Map[y][x] = ' ';
                                    x += 1;
                                    Map[y][x2] = '$';
                                }
                            }
                        }
                        if(GetAsyncKeyState(VK_LEFT) != 0)
                        {
                            x2 = (x-1);
                            switch(Map[y][x2])
                            {
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    x -= 1;
                                    Map[y][x2] = '$';
                                }break;
                                case '!': level = 2; break;
                                case '^': Game_Over(); break;
                                case '*': HP -= 10; break;
                                case '@':
                                {
                                    Score += 10;
                                    Map[y][x] = ' ';
                                    x -= 1;
                                    Map[y][x2] = '$';
                                }
                            }
                        }
                    }
                }
            }
            Sleep(Gamespeed);
        }
//============================================================================================================
//============================================================================================================
    system("cls");
    while(level == 2)
    {
        system("cls");
        cout << "Очков: " << Score << " | " << "Уровень: " << level << " | " << "Жизни: " << HP << '\n';
        for(int y = 0; y<10; y++) cout << Map2[y] << '\n';
        for(int y=0; y<10; y++)
            for(int x=0; x<60; x++)
            {
///Моб
///=============================================================================
                switch(Map2[y][x])
                {
                    case '*':
                    {
                        srand(time(0));
                        int i = rand() & 2;
                        if(i == 0)
                        {
                            int x2 = (x+1);
                            switch(Map2[y][x2])
                            {
                                case ' ':
                                {
                                    Map2[y][x] = ' ';
                                    x += 1;
                                    Map2[y][x2] = '*';
                                }break;
                                case '$': HP -= 10; break;
                            }

                        }
                        else
                        {
                            int x2 = (x-1);
                            switch(Map2[y][x2])
                            {
                                case ' ':
                                {
                                    Map2[y][x] = ' ';
                                    x -= 1;
                                    Map2[y][x2] = '*';
                                }break;
                                case '$': HP -= 10; break;
                            }
                        }
                    }
                }
///===================================================================================
                switch(Map2[y][x])
                {
                case '$':
                    {
                        Exit_game(HP);
                        Game_Over(HP);
///Гравитация
///=================================================================================
                        y2 = (y + 1);
                        switch(Map2[y2][x])
                        {
                            case ' ':
                            {
                                Map2[y][x] = ' ';
                                y += 1;
                                Map2[y2][x] = '$';
                            }break;
                            case '!': level = 3; break;
                            case '^': Game_Over(); break;
                            case '@':
                            {
                                Score += 10;
                                Map2[y][x] = ' ';
                                y += 1;
                                Map2[y2][x] = '$';
                            }break;
                            case '*':
                            {
                                Map2[y][x] = ' ';
                                y += 1;
                                Map2[y2][x] = '$';
                            }break;
                        }
///====================================================================================
                        if(GetAsyncKeyState(VK_SPACE) != 0)
                        {
                            y2 = (y - 3);
                            switch(Map2[y2][x])
                            {
                                case ' ':
                                {
                                    Map2[y][x] = ' ';
                                    y -= 3;
                                    Map2[y2][x] = '$';
                                }break;
                                case '!': level = 3; break;
                                case '^': Game_Over(); break;
                                case '@':
                                {
                                    Score += 10;
                                    Map2[y][x] = ' ';
                                    y -= 1;
                                    Map2[y2][x] = '$';
                                }break;
                            }
                        }
                        if(GetAsyncKeyState(VK_RIGHT) != 0)
                        {
                            x2 = (x+1);
                            switch(Map2[y][x2])
                            {
                                case ' ':
                                {
                                    Map2[y][x] = ' ';
                                    x += 1;
                                    Map2[y][x2] = '$';
                                }break;
                                case '!': level = 3; break;
                                case '^': Game_Over(); break;
                                case '*': HP -= 10; break;
                                case '@':
                                {
                                    Score += 10;
                                    Map2[y][x] = ' ';
                                    x += 1;
                                    Map2[y][x2] = '$';
                                }
                            }
                        }
                        if(GetAsyncKeyState(VK_LEFT) != 0)
                        {
                            x2 = (x-1);
                            switch(Map2[y][x2])
                            {
                                case ' ':
                                {
                                    Map2[y][x] = ' ';
                                    x -= 1;
                                    Map2[y][x2] = '$';
                                }break;
                                case '!': level = 3; break;
                                case '^': Game_Over(); break;
                                case '*': HP -= 10; break;
                                case '@':
                                {
                                    Score += 10;
                                    Map2[y][x] = ' ';
                                    x -= 1;
                                    Map2[y][x2] = '$';
                                }
                            }
                        }
                    }
                }
            }
        Sleep(Gamespeed);
    }
//=============================================================================================================
//=============================================================================================================
    system("cls");
    while(level == 3)
    {
        system("cls");
        cout << "Очков: " << Score << " | " << "Уровень: " << level << " | " << "Жизни: " << HP << '\n';
        for(int y=0; y<9; y++) cout << Map3[y] << '\n';
        for(int y=0; y<9; y++)
            for(int x=0; x<60; x++)
            {
///Моб
///=============================================================================
                switch(Map3[y][x])
                {
                    case '*':
                    {
                        srand(time(0));
                        int i = rand() & 2;
                        if(i == 0)
                        {
                            int x2 = (x+1);
                            switch(Map3[y][x2])
                            {
                                case ' ':
                                {
                                    Map3[y][x] = ' ';
                                    x += 1;
                                    Map3[y][x2] = '*';
                                }break;
                                case '$': HP -= 10; break;
                            }

                        }
                        else
                        {
                            int x2 = (x-1);
                            switch(Map3[y][x2])
                            {
                                case ' ':
                                {
                                    Map3[y][x] = ' ';
                                    x -= 1;
                                    Map3[y][x2] = '*';
                                }break;
                                case '$': HP -= 10; break;
                            }
                        }
                    }
                }
///===================================================================================
                switch(Map3[y][x])
                {
                case '$':
                    {
                        Exit_game(HP);
                        Game_Over(HP);
///Гравитация
///=================================================================================
                        y2 = (y + 1);
                        switch(Map3[y2][x])
                        {
                            case ' ':
                            {
                                Map3[y][x] = ' ';
                                y += 1;
                                Map3[y2][x] = '$';
                            }break;
                            case '!': level = 2; break;
                            case '^': Game_Over(); break;
                            case '@':
                            {
                                Score += 10;
                                Map3[y][x] = ' ';
                                y += 1;
                                Map3[y2][x] = '$';
                            }break;
                            case '*':
                            {
                                Map3[y][x] = ' ';
                                y += 1;
                                Map3[y2][x] = '$';
                            }break;
                        }
///====================================================================================
                        if(GetAsyncKeyState(VK_SPACE) != 0)
                        {
                            y2 = (y - 3);
                            switch(Map3[y2][x])
                            {
                                case ' ':
                                {
                                    Map3[y][x] = ' ';
                                    y -= 3;
                                    Map3[y2][x] = '$';
                                }break;
                                case '!': level = 2; break;
                                case '^': Game_Over(); break;
                                case '@':
                                {
                                    Score += 10;
                                    Map3[y][x] = ' ';
                                    y -= 1;
                                    Map3[y2][x] = '$';
                                }break;
                            }
                        }
                        if(GetAsyncKeyState(VK_RIGHT) != 0)
                        {
                            x2 = (x+1);
                            switch(Map3[y][x2])
                            {
                                case ' ':
                                {
                                    Map3[y][x] = ' ';
                                    x += 1;
                                    Map3[y][x2] = '$';
                                }break;
                                case '!': level = 2; break;
                                case '^': Game_Over(); break;
                                case '*': HP -= 10; break;
                                case '@':
                                {
                                    Score += 10;
                                    Map3[y][x] = ' ';
                                    x += 1;
                                    Map3[y][x2] = '$';
                                }
                            }
                        }
                        if(GetAsyncKeyState(VK_LEFT) != 0)
                        {
                            x2 = (x-1);
                            switch(Map3[y][x2])
                            {
                                case ' ':
                                {
                                    Map3[y][x] = ' ';
                                    x -= 1;
                                    Map3[y][x2] = '$';
                                }break;
                                case '!': level = 2; break;
                                case '^': Game_Over(); break;
                                case '*': HP -= 10; break;
                                case '@':
                                {
                                    Score += 10;
                                    Map3[y][x] = ' ';
                                    x -= 1;
                                    Map3[y][x2] = '$';
                                }
                            }
                        }
                    }
                }
            }
        Sleep(Gamespeed);
    }
//============================================================================================================
//============================================================================================================
system("cls");
    while(level == 2)
    {
        system("cls");
        cout << "Очков: " << Score << " | " << "Уровень: " << level << " | " << "Жизни: " << HP << '\n';
        for(int y = 0; y<10; y++) cout << Map4[y] << '\n';
        for(int y=0; y<10; y++)
            for(int x=0; x<60; x++)
            {
///Моб
///=============================================================================
                switch(Map4[y][x])
                {
                    case '*':
                    {
                        srand(time(0));
                        int i = rand() & 2;
                        if(i == 0)
                        {
                            int x2 = (x+1);
                            switch(Map4[y][x2])
                            {
                                case ' ':
                                {
                                    Map4[y][x] = ' ';
                                    x += 1;
                                    Map4[y][x2] = '*';
                                }break;
                                case '$': HP -= 10; break;
                            }

                        }
                        else
                        {
                            int x2 = (x-1);
                            switch(Map4[y][x2])
                            {
                                case ' ':
                                {
                                    Map4[y][x] = ' ';
                                    x -= 1;
                                    Map4[y][x2] = '*';
                                }break;
                                case '$': HP -= 10; break;
                            }
                        }
                    }
                }
///===================================================================================
                switch(Map4[y][x])
                {
                case '$':
                    {
                        Exit_game(HP);
                        Game_Over(HP);
///Гравитация
///=================================================================================
                        y2 = (y + 1);
                        switch(Map4[y2][x])
                        {
                            case ' ':
                            {
                                Map4[y][x] = ' ';
                                y += 1;
                                Map4[y2][x] = '$';
                            }break;
                            case '!': level = 3; break;
                            case '^': Game_Over(); break;
                            case '@':
                            {
                                Score += 10;
                                Map4[y][x] = ' ';
                                y += 1;
                                Map4[y2][x] = '$';
                            }break;
                            case '*':
                            {
                                Map4[y][x] = ' ';
                                y += 1;
                                Map4[y2][x] = '$';
                            }break;
                        }
///====================================================================================
                        if(GetAsyncKeyState(VK_SPACE) != 0)
                        {
                            y2 = (y - 3);
                            switch(Map4[y2][x])
                            {
                                case ' ':
                                {
                                    Map4[y][x] = ' ';
                                    y -= 3;
                                    Map4[y2][x] = '$';
                                }break;
                                case '!': level = 3; break;
                                case '^': Game_Over(); break;
                                case '@':
                                {
                                    Score += 10;
                                    Map4[y][x] = ' ';
                                    y -= 1;
                                    Map4[y2][x] = '$';
                                }break;
                            }
                        }
                        if(GetAsyncKeyState(VK_RIGHT) != 0)
                        {
                            x2 = (x+1);
                            switch(Map4[y][x2])
                            {
                                case ' ':
                                {
                                    Map4[y][x] = ' ';
                                    x += 1;
                                    Map4[y][x2] = '$';
                                }break;
                                case '!': level = 3; break;
                                case '^': Game_Over(); break;
                                case '*': HP -= 10; break;
                                case '@':
                                {
                                    Score += 10;
                                    Map4[y][x] = ' ';
                                    x += 1;
                                    Map4[y][x2] = '$';
                                }
                            }
                        }
                        if(GetAsyncKeyState(VK_LEFT) != 0)
                        {
                            x2 = (x-1);
                            switch(Map4[y][x2])
                            {
                                case ' ':
                                {
                                    Map4[y][x] = ' ';
                                    x -= 1;
                                    Map4[y][x2] = '$';
                                }break;
                                case '!': level = 3; break;
                                case '^': Game_Over(); break;
                                case '*': HP -= 10; break;
                                case '@':
                                {
                                    Score += 10;
                                    Map4[y][x] = ' ';
                                    x -= 1;
                                    Map4[y][x2] = '$';
                                }
                            }
                        }
                    }
                }
            }
        Sleep(Gamespeed);
    }
}
