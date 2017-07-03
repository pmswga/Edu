#include <iostream>
using namespace std;

int main()
{
    int first = 0, second = 0;

    while(cin >> first >> second)
    {
        cout << "-[]-----------------" << '\n';
        cout << first << "|" << second << '\n';
        if(first > second)
        {
            cout << "MAX value: " << first << '\n';
            cout << "MIN value: " << second << '\n';
        }
        else if(first == second) cout << first << " == " << second << '\n';
        else
        {
            cout << "MAX value: " << second  << '\n';
            cout << "MIN value: " << first << '\n';
        }


        cout << "-----------------[]-" << '\n';
    }
}
