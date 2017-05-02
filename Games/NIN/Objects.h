#ifndef OBJECTS_H_INCLUDED
#define OBJECTS_H_INCLUDED

#include "Lib.h"
using namespace std;



int in = 0;
int gamespeed = 500;
int number_steps = 60;



class Player
{
public:
    string Name;
    int HP;
    int Mana;
    int Damage;
    int luck;
};


class AI
{
public:
    int HP;
    int Mana;
    int Luck;
    int XP;
};

#endif
