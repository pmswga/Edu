#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");
    TCDinamyc_Array<char> first1;
    cout << "Заполните массив" << '\n';
    for(int f = 0; f<first1.lenght; f++) cin >> first1[f];
    for(int f=0; f<first1.lenght; f++)
    {
        cout << first1.arr[f];
        if(first1.arr[f] == first1.lenght) cout << "." << '\n';
        else cout << ",";
    }
    cout << "#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#" << '\n' << '\n';
///--------------------------------------------------------------------------------------------------

    int new_lenght = 10;
    TCDinamyc_Array<char> first(new_lenght);
    for(int f = 0; f<first.lenght; f++) cin >> first[f];
    for(int f=0; f<first.lenght; f++)
    {
        cout << first.arr[f];
        if(first.arr[f] == first.lenght) cout << "." << '\n';
        else cout << ",";
    }
    cout << "Функция resize" << '\n';
    first.resize(20);
    for(int f=0; f<first.lenght; f++)
    {
        cout << first.arr[f];
        if(first.arr[f] == first.lenght) cout << "." << '\n';
        else cout << ",";
    }
    cout << '\n' << "#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#" << '\n' << '\n';
    cout << "Функция insert" << '\n';
    first.insert(1);
    for(int f=0; f<first.lenght; f++)
    {
        cout << first.arr[f];
        if(first.arr[f] == first.lenght) cout << "." << '\n';
        else cout << ",";
    }
    cout << '\n' << "#+#+#+#+#+#++#+#+#+#+#+##+#+#+#+#+#+#+#+#+#+#+##+#+" << '\n' << '\n';
    cout << "Функция remove" << '\n';
    first.remove(4);
    for(int f=0; f<first.lenght; f++)
    {
        cout << first.arr[f];
        if(first.arr[f] == first.lenght) cout << "." << '\n';
        else cout << ",";
    }
}
