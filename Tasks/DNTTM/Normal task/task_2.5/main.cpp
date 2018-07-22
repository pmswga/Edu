//2.5.С клавиатуры вводятся числа, пока не введен 0. Посчитать их сумму
#include <iostream>
using namespace std;
int main()
{
    int a,sum;
    cin >> a;
    sum=a;
    while(a!=0)
    {
        cin >> a;
        sum=sum+a;
    }
    cout << sum << '\n';
}
