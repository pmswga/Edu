/*!
  * \caption Задача: 1.3.5
  * \brief С клавиатуры вводятся n чисел, найти минимальное из них.
  */

#include <iostream>
using namespace std;

int main()
{
    unsigned int count_inputs(10);
    int input(0);
    int min = input;

    while (count_inputs > 0) {
        cin >> input;

        if (input < min) {
            min = input;
        }

        count_inputs--;
    }

    cout << "Max number = " << min << '\n';

    cin.get();
}
