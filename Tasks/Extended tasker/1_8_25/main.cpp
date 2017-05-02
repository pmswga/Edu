//1.8.25. Написать программу, строящую из звездочек квадрат.
#include <iostream>
using namespace std;

void foursquare1(int a, int i, char y)
{
    cout << '\n';
    cout << y;
    for(i=0; i<a; i++)
    {
        cout << '*' ;
    }
    cout << y;
}

void foursquare2(int a, int i, char y)
{
    for(i=0; i<a; i++)
    {
        cout << '\n' << '*';
    }
}

int main()
{
    char y='.';
    int u=0;
    int a;
    int i;
    cin >> a;
    foursquare1(a,i,y);
    foursquare2(a,i,y);
    foursquare1(a,i,y);
}
