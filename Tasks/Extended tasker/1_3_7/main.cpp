/*С клавиатуры вводятся числа, конец ввода – нажатие «0», найти их среднее арифметическое.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    float input, sum = 0, count_numbers = 0, avange = 0;

    while(input != 0)
    {
        cin >> input;
        count_numbers++;
        sum += input;

        if(sum != 0 and input != 0) avange = sum / count_numbers;
    }
    cout << "\nСреднее арфиметическое равно " << avange << '\n';
}
