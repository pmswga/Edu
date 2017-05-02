///1.8.12. Вводятся числа x и y, вывести все четные числа из этого диапазона.
#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0;
    cin >> x >> y;

    for(int i = x; i < y; i++) if((i % 2) == 0) cout << i << " ";
}
