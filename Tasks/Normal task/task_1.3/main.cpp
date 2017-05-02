#include <iostream>
using namespace std;

int main()
{
    int i;
    int sum = 0;
    cin >> i;
    setlocale(0, "");
    for (i = 1; i <= 1000; i++)
    {
        sum = sum + i;
    }
    cout << "___*___" << sum << endl;
    return 0;
}
