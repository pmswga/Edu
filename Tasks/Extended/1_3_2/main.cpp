/*!
  * \caption Задача: 1.3.2
  * \brief С клавиатуры вводятся n чисел, найти их сумму
  */

#include <iostream>
using namespace std;

int main()
{
    unsigned int count_inputs(10);
    int input(0), sum(0);

    while (count_inputs > 0) {
        cin >> input;
        sum += input;

        count_inputs--;
    }

    cout << "Sum of inputed numbers = " << sum << '\n';

    cout << "Press any key to exit...";
    cin.get();
}
