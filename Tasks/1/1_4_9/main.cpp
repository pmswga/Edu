///Написать программу, которая выводит на экран линию.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int length_line;
    char symbol;
    cout << "Введите длину линии: ";
    cin >> length_line;
    cout << "Введите отображаемый символ: ";
    cin >> symbol;

    for(int i = 0; i < length_line; i++) cout << symbol;
}
