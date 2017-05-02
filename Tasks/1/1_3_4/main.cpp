/*С клавиатуры вводятся n чисел, найти максимальное из них.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, last_number = 0, max_number = 0;

    while(true)
    {
        cin >> input;

        if(input > last_number) max_number = input;
        last_number = input;

        cout << "Самое большое число: " << max_number << '\n';
    }
}
