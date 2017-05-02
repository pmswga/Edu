///Вводятся числа x и y, вывести все положительные числа из этого диапазона.
#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0;
    cin >> x >> y;

    if(x < y)
    {
        for(int i = x; i < y; i++)
            if(i > 0) cout << i << " ";
    }
    else for(int i = y; i < x; i++) if(i > 0) cout << i << " ";
}
