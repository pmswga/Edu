/*2.2.Пользователь вводит с клавиатуры число, вывести н экран больше ли это число чем 50,
меньше или равно*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    do
    {
    cin >> a;
    if(a<50)
    {
        cout << 50 << '\n';
        cout << "Bolshe" << '\n';
    }
    if(a>50)
    {
        cout << "No less" << '\n';
        cout << a << '\n';
    }
    if(a==50)
    {
        cout << "RAVNO" << '\n';
    }
    }while(a!=0);
}
