///Написать программу, вычисляющую факториал числа, введенного с клавиатуры.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, factorial = 1;
    cin >> input;
    for(int i = 1; i < input+1; i++) factorial *= i;
    cout << "Факториал введённого числа: " << factorial;
}
