///Написать программу, которая выводит на экран ромб.
#include <iostream>
using namespace std;

int main()
{
    int w = 0, h = 0;
    cin >> w >> h;

    for(int x = 0; x < h; x++)
    {
        for(int y = 0; y < w; y++)
        {
            if(y > 1 and y < w) cout << ' ';
            else cout << "#";
        }
        cout << '\n';
    }
}
