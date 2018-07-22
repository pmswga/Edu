#include <iostream>
using namespace std;
int b(int a)
{
    if(a<0)
    {
        a=a*(-1);
    }
    return a;
}

int main()
{
    int a,z;
    cin >> a;
    z=b(a);
    cout << z;
}
