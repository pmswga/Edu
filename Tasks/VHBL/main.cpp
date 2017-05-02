#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a,l,u,mas[500];
    setlocale(LC_ALL,"RUS");
    while(!kbhit())
    {
        for(l=0,u=1; l<500 and u<500; l++ and u++) mas[l]=u;
        {
            a=getch();
            if(a==mas[l])
            {
                cout << "id клавишы = ";
                cout << a << '\n';
            }
        }
    }
}
