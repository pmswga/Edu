///1.8.13. Вводятся числа. Конец ввода — 0. Вывести разность первого и минимального.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int value = 1;
    int first_value = 0, end_value = 0;
    cin >> value;
    first_value = value;

    while(value != 0)
    {
        cin >> value;
        if(value != 0) end_value = value;
    }
    cout << first_value << '\n';
    cout << min(first_value, end_value) << '\n';

    cout << "Разность первого числа и минимального = " << (first_value - min(first_value, end_value));


}
