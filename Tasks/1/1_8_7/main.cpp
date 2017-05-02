///Организовать в программе «защиту от дурака». Программа принимает значение целого типа больше нуля, если введено значение меньше нуля, т должно быть выведено сообщение и повториться ввод.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input;
    while(true)
    {
        cin >> input;
        if(input < 0)
        {
            cout << "Введите значение заново: ";
            cin >> input;
        }
    }
}
