#ifndef BAT_H_INCLUDED
#define BAT_H_INCLUDED

#include "Lib.h"
#include "Objects.h"
using namespace std;

void Battle(AI men, Player Ser)
{
    system("cls");
    for(int i = 10; i<100; i=i+10)
    {
        cout << "Загрузка " << i << '%' << '\n';
        Sleep(500);
        system("cls");
    }
    system("cls");
    cout << "Ваш враг: ";
    srand(time(0));
    int i = rand() % 3;
    if(i == 0)
    {
        cout << "Воин" << '\n';
        men.HP = 60;
        men.Mana = 20;
    }
    if(i == 1)
    {
        cout << "Стрелок" << '\n';
        men.HP = 45;
        men.Mana = 0;
    }
    if(i == 2)
    {
        cout << "Маг" << '\n';
        men.HP = 40;
        men.Mana = 50;
    }
    system("cls");
    for(int n=3; n!=0; n--)
    {
        cout << "Битва начнётся через " << n;
        Sleep(1000);
        system("cls");
    }
    while(Ser.HP > 0 or men.HP > 0)
    {
        cout << "Здоровье противника " << men.HP <<  '\n';
        cout << "Мана " << men.Mana << '\n';
        cout << "=========================" << '\n';
        cout << "Ваше здоровье " << Ser.Mana << '\n';
        cout << "Мана " << Ser.Mana << '\n' << '\n';
        cout << "Выбирете действие: " << '\n';
        cout << "1.Атака" << '\n';
        cout << "2.Магия" << '\n';
        cout << "3.Пропустить ход" << '\n' << '\n';
        cin >> in;
        if(in == 1)
        {

        }
        if(in == 2)
        {

        }
        if(in == 3)
        {

        }
    }
}



int Suppot_Battle(AI men, Player Ser)
{
mark:
    system("cls");
    cout << "Настройки боя:" << '\n';
    cout << "1.Настройка игрока и соперника" << '\n';
mark2:
    cout << "2.Внутри игровые настройки" << '\n' << '\n';
    cin >> in;
    system("cls");
    if(in == 1)
    {
        cout << "1.Имя" << '\n';
marl:
        cout << "2.Класс" << '\n' << '\n';
        cin >> in;
        if(in == 1)
        {
            system("cls");
            cout << "Введите имя: ";
            cin >> Ser.Name;
            system("cls");
            goto marl;
        }
        if(in == 2)
        {
            system("cls");
            cout << "Хотите использовать стандартные значения?" << '\n';
            cout << "1.Да/2.Нет" << '\n' << '\n';
            cin >> in;
            system("cls");
            if(in == 2)
            {
                cout << "Выбирете класс: " << '\n';
                cout << "1.Воин" << '\n';
                cout << "2.Стрелок" << '\n';
                cout << "3.Маг" << '\n' << '\n';
                cin >> in;
                if(in == 2)
                {
                    system("cls");
                    cout << "Здоровье: ";
                    cin >> Ser.HP;
                }
                system("cls");
                cout << "Здоровье: ";
                cin >> Ser.HP;
                cout << "Мана: ";
                cin >> Ser.Mana;
                system("cls");
                goto mark2;
            }
            if(in == 1)
            {
                cout << "Выбирете класс: " << '\n';
                cout << "1.Воин" << '\n';
                cout << "2.Стрелок" << '\n';
                cout << "3.Маг" << '\n' << '\n';
                cin >> in;
                system("cls");
                if(in == 1)
                {
                    Ser.HP = 60;
                    Ser.Mana = 20;
                    cout << "Жизни: " <<Ser.HP << '\n';
                    cout << "Мана: " << Ser.Mana << '\n';
                    Sleep(5000);
                    system("cls");
                    goto mark2;
                }
                if(in == 2)
                {
                    Ser.HP = 45;
                    cout << "Жизни: " << Ser.HP << '\n';
                    Sleep(5000);
                    system("cls");
                    goto mark2;
                }
                if(in == 3)
                {
                    Ser.HP = 40;
                    Ser.Mana = 50;
                    cout << "Жизни: " << Ser.HP << '\n';
                    cout << "Мана: " << Ser.Mana << '\n';
                    Sleep(5000);
                    system("cls");
                    goto mark2;
                }
            }
        }
    }
    if(in == 2)
    {
        cout << "Скорость боя: " << gamespeed << '\n';
        cout << "Максимальное количество ходов: " << number_steps << '\n' << '\n';
        cout << "Хотите изменить настройки?" << '\n' << '\n';
        cout << "1.Да/2.Нет" << '\n';
        cin >> in;
        system("cls");
        if(in == 1)
        {
            cout << "1.Скорость боя: " << gamespeed << '\n';
mrs:
            cout << "2.Максимальное количество ходов: " << number_steps << '\n' << '\n';
            cin >> in;
            if(in == 1)
            {
                system("cls");
ma:
                cout << "Ввелите скорость игры от 100 до 1000" << '\n';
                cin >> in;
                if(in > 100 and in < 1000)
                {
                    gamespeed = in;
                    system("cls");
                    goto mrs;
                }
                goto ma;
            }
            if(in == 2)
            {
                system("cls");
ma2:
                cout << "Введите количество ходов" << '\n';
                cin >> in;
                if(in > 0 and in < 1001)
                {
                    number_steps = in;
                    system("cls");
                    goto ma3;
                }
                goto ma2;
            }
        }
        if(in == 2)
        {
            goto ma3;
        }
    }
    system("cls");
ma3:
    cout << "1.Начать игру" << '\n';
    cin >> in;
    if(in == 1) return in;
}



#endif
