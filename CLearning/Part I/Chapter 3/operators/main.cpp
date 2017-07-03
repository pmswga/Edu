#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number: ";
    double n;
    cin >> n;
    
    cout << "n == " << n << '\n'
         << "n + 1 == " << (n + 1) << '\n'
         << "3 * n == " << (3 * n) << '\n'
         << "n + n == " << (n + n) << '\n'
         << "n in sqr == " << (n * n) << '\n'
         << "n / 2 == " << (n / 2) << '\n';
    
    int a = 0, b =0;
    cout << "Enter a & b: " << '\n';
    cin >> a >> b;
    
    cout << "Result " << a << " % " << b << " = " << (a % b) << '\n';
    
}
