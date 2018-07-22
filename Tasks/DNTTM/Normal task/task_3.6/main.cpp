/*3.6. Заполнить массив из 10 элементов. Выяснить, является ли массив возрастающей или
убывающей последовательностью.*/
#include <iostream>
using namespace std;
int main()
{
    int mas[10],i,a;
    setlocale(LC_ALL,"RUS");
    for(i=0; i<10; i++)
    {
        cin >> a;
        mas[i]=a;
    }
    for(int i=0,s=1; i<10 and s<10; i++ and s++)
    {
        if(mas[i]>mas[s])
        {
            cout << "Массмв убывающий" << '\n';

        }
        if(mas[s]>mas[i])
        {
            cout << "Массив возрастающий" << '\n';
        }
    }
}
