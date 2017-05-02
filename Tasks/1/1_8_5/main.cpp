///Цифры вводятся с клавиатуры, конец ввода – нажатие 0, определить, сколько чисел из введенных больше 0.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, countValues = 0;
    while(input != 0)
    {
        cin >> input;
        if(input > 0) countValues++;
    }
    cout << "Кол-во введённых чисел, которые больше 0: " << countValues;
}
