//2.6.Вводятся 2 числа с клавиатуры. Вывести все числа между ними.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a;
    cin >> b;
    c=0;
    d=0;
    c=b;
    d=a;
    if(a<b)
    {
        while(c!=a)
    {
        c--;
        cout << c;
    }
    }else
    {
        while(d!=b)
        {
            d--;
            cout << d;
        }
    }
}
