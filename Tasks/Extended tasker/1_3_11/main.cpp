/*Объявите переменные дробного типа, необходимые для пересчета веса из фунтов в килограммы.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double input, kg = 0;
    const double one_pound  = 453.59237;

    while(true)
    {
        cout << "Вес в фунтах: ";
        cin >> input;

        double gramms = input * one_pound;
        kg = gramms * 0.001;

        cout << "\nВес в килограммах равен " << kg << '\n' << "===========\n";
    }
}
