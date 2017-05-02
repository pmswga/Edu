/*С клавиатуры вводятся n чисел, найти их среднее арифметическое.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    float input, sum = 0;
    float average = 0;
    int count_of_numbers = 0;

    while(true)
    {
        cin >> input;
        sum += input;
        count_of_numbers++;

        if(count_of_numbers > 1)
        {
            average = sum / count_of_numbers;
            cout << "Среднее арифметическое равно " << average << '\n';
        }
    }
}
