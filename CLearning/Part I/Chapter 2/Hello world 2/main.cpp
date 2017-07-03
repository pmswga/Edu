#include <iostream>
using namespace std;

/*!
    \file main.cpp
    \author Сергей Басыров
    \brief Модифицированная программа Hello World

    Программа выводит сообщение "Hello World" и ожидает ввода символа
*/

inline readkey()
{
    char chr;
    cin >> chr;
}

int main()
{
    cout << "Hello World" << '\n';
    readkey();
    return 0;
}
