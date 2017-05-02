#include "Lib.h"
#include "Control.h"
using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");
    while(level != 2)
    {
        Mav();
        for(int y=0; y<10; y++)
        {
            for(int x=0; x<40; x++)
            {
                switch(Map[y][x])
                {
                    case '$':
                    {
                        srand(time(0));
                        AI = rand() % 1;
                        if(AI == 0)
                        {
                            if(Map[y][x+1]!='#')
                            {
                                ///Right
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
                            else
                            {
                                if(Map[y-1][x]!='#')
                                {
                                    Up(x,y);
                                    if(Map[y-1][x]!='#')
                                    {
                                        Up(x,y);
                                    }
                                }
                                else
                                {
                                    for(int u=0; u<3; u++)
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
                                }
                            }
                        }
                    }
                }
            }
        }
        Sleep(Gamespeed);
    }
}
