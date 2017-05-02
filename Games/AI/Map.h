#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

#include "Lib.h"
using namespace std;

char Map[10][40] = {"#######################################",
                    "#                   #    ! #      #   #",
                    "#   #####           #      #    #     #",
                    "#       #           #### ###          #",
                    "#     ###           #                 #",
                    "#     # #                #     #### ###",
                    "#######      ######## #               #",
                    "#$      #             #               #",
                    "#######################################"};

int Gamespeed = 400;
int level = 1;
bool stopgame = false;
int HP = 100;
int MaxHP = 100;
///=======================
///Координаты
int x;
int y;

int x2;
int y2;
///=======================
int AI;
///=======================

void Mav()
{
    system("cls");
    for(int i=0; i<10; i++)
    {
        cout << Map[i] << '\n';
    }
    cout << "Жизни " << HP << '/' << MaxHP << '\n';
}


#endif
