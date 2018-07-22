//1.8.ќбмен€ть значени€ в 3-ех переменных по кругу, использу€ только одну дополнительную переменную.
#include <iostream>
using namespace std;
int main()
{
    int a,d,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    d=a;
    a=c;
    c=b;
    b=d;
    cout << a << b << c << '\n';
}
