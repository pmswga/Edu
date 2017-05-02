#include <iostream>
using namespace std;

bool chet(int a)
{
    if(a%2 or a==0)
    {
        return false;
    }else
    {
        return true;
    }
}

int main()
{
    int a,cht;
    do
    {
    cin >> a;
    cht=chet(a);
    cout << cht << '\n';
    }while(a!=0);
}
