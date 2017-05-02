/*С клавиатуры вводятся n чисел, найти их сумму.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, sum = 0;

    while(true)
    {
        cin >> input;
        sum += input;

        cout << "Сумма чисел равна " << sum << '\n';
    }
}
