/*!
  * \caption Задача: 1.3.4
  * \brief С клавиатуры вводятся n чисел, найти максимальное из них.
  */

#include <iostream>
using namespace std;

int main()
{
    unsigned int count_inputs(10);
    int input(0);
    int max = input;

    while (count_inputs) {
        cin >> input;

        if (input > max) {
            max = input;
        }

        count_inputs--;
    }

    cout << "Max number = " << max << '\n';

    cin.get();
}
