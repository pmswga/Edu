///Числа вводятся с клавиатуры, конец ввода – число 0. Требуется вывести на экран произведение этих чисел, если их сумма не превышает 100, и их сумму в противном случае.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, sum = 0, proz = 1;

    while(input != 0)
    {
        cin >> input;
        sum += input;
        if(input != 0) proz *= input;
    }
    if(sum < 100)
    {
        cout << "Произведение чисел: " << proz << '\n';
        cout << "Сумма чисел: " << sum << '\n';
    }
    else cout << "Сумма чисел: " << sum << '\n';
}
