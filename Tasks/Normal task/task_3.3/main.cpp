/*3.3.Заполнить массив из 10 элементов числами с клавиатуры. Посчитать количество чисел
меньше нуля.*/
#include <iostream>
using namespace std;
int main()
{
    int i,mas[10],b,a;
    i=0;
    a=0;
    do
    {
        cin >> b;
        mas[i]=b;
        if(b<0)
        {
            a=a+mas[i];
        }
        i++;

    }while(i>=0 and b!=0);
    cout << a;
}
