/*!
  * \caption Задача: 1.3.3
  * \brief С клавиатуры вводятся n чисел, найти их среднее арифметическое.
  */

#include <iostream>
using namespace std;

int main()
{
    unsigned int i(0), count_inputs(10);
    int input(0);
    double sum(0);

    while (i < count_inputs) {
        cin >> input;

        sum += input;

        i++;
    }

    cout << "Middle arithmetic = " << (sum/count_inputs) << '\n';

    cin.get();
}
