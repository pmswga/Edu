/*!
  * \title Задача: 1.3.6
  * \brief С клавиатуры вводятся числа, конец ввода – нажатие «0», найти их сумму.
  */

#include <iostream>
using namespace std;

int main()
{
    int input(1);
    int sum(0);

    while (cin >> input && input != 0)
    {
        sum += input;
    }

    cout << "Sum = " << sum << '\n';

    cout << "Press any key..." << '\n';
    cin.get();
}
