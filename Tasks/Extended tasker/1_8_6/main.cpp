///Вводится последовательность чисел до тех, пока не будет введено два равных числа подряд. Вывести на экран количество введенных чисел.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, last_value = 0, countValues = 0;
    while(true)
    {
        cin >> input;
        countValues++;
        if(last_value == input) break;
        last_value = input;
    }
    cout << "Кол-во введёных чисел: " << countValues << '\n';
}
