///Ќаписать программу, мен€ющую местами значени€ двух переменных, использу€ третью переменную.
#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 2;
    cout << a << "   " << b << '\n';
    swap(a, b);
    cout << a << "   " << b << '\n';
}
