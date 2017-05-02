///Вводятся числа x и y, вывести все числа из этого диапазона.
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    for(int i = x+1; i < y; i++) cout << i << " ";
}
