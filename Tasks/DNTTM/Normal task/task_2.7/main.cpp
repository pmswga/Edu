//2.7.С клавиатуры вводятся числа пока не введен 0. Найти максимальное.
#include <iostream>
using namespace std;
int main()
{
    int a,m;
    m=0;
    while(a!=0)
    {
        cin >> a;
        if(a>m)
        {
            m=a;
        }
    }
    cout << m << '\n';
}
