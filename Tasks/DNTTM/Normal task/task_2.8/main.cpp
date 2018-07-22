/*2.8.Число K вводится с клавиатуры. Вывести на экран одностороннюю пирамиду из
звездочек высотой K этажей.*/
#include <iostream>
using namespace std;

int pyramid(int a)
{
    int height,width;
    height=1;
    width=0;
    while(height<=a)
    {
        width = 0;
        while(width < height)
        {
            cout << "*";
            width++;
        }
        cout << '\n';
        height++;
    }
}

int main()
{
    int a;
    cin >> a;
    pyramid(a);
}
