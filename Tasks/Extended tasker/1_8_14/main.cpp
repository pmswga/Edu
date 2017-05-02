//1.8.14. Написать программу, которая выводит на экран ваше имя и фамилию 10 раз.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"RUS");
    for(int i=0; i!=10; i++) cout << "Сергей Басыров" << '\n';
}
