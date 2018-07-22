/*3.11. Написать функцию, возвращающую минимальное из двух чисел. Написать
программу, демонстрирующую работу функции.*/
#include <iostream>
using namespace std;

float min(float a, float b)
{
    if(a>b)
    {
        cout << a;
    }else
    {
        cout << b;
    }
    return a,b;
}

int main()
{
    float a,b;
    cin >> a;
    cin >> b;
    min(a,b);
}
