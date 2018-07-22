/*3.5.Написать программу, которая ищет элемент по значению и возвращает индекс его
первого вхождения в массив.*/
#include <iostream>
using namespace std;
int main()
{
    int mas[10],i,s,a=0,b;
    for(i=0; i<10 and a<10; i++ and a++)
    {
        mas[i]=a;
    }
    cin >> b;
    for(i=0; i<10; i++)
    {
        if(mas[i]==b)
        {
            s=0;
            mas[i]=s;
            b=mas[i];
        }
    }
    cout << b;
}
