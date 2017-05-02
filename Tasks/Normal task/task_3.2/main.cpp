//3.2.Заполнить массив из 10 элементов числами от 10 до 1. Посчитать сумму элементов.
#include <iostream>
using namespace std;
int main()
{
    int mas[10],a,i;
    a=10;
    i=10;
    while(i>1)
    {
        mas[i]=i;
        a=a+mas[i];
        i--;
    }
    cout << a;
}
