/*С клавиатуры вводятся числа, конец ввода – нажатие «0», найти их сумму.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, sum = 0;

    while(input != 0)
    {
        cin >> input;
        sum += input;
    }
    cout << "\nСумма введёных чисел равна " << sum << '\n';
}
