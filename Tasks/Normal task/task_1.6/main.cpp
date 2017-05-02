/*1.6.Пользователь вводит 2 числа с клавиатуры: число долларов и число центов. Перевести
эту сумму в копейки*/
#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    setlocale(LC_ALL,"RUS");
    cout << "Введите доллары" << '\n';
    cin >> a;
    cout << "Введите центы" << '\n';
    cin >> b;
    a=a*32;
    c=a*100;
    b=b*30,803;
    cout << "Доллары в копейках" << '\n';
    cout << c << '\n';
    cout << "Центы в копейках" << '\n';
    cout << b << '\n';
}
