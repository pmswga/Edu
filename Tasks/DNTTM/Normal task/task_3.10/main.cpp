/*3.10. Написать функции для алгоритмов из задач 3.3, 3.4, 3.5, 3.6, а также для
заполнения массива и вывода массива на экран. Написать программу,
демонстрирующую работу функций.*/
#include <iostream>
using namespace std;
//Функция заполнения
int filling(int mas[], int a, int i)
{
    for(i=0; i<10; i++)
    {
        cout << "Индекс " << i << " = ";
        cin >> a;
        mas[i]=a;
    }
    return mas[i];
}
//Функция подсчета отрицательных чисел
int NLTZ(int mas[],int i)
{
    int c=0;
    for(i=0; i<10; i++) if(mas[i]<0) c=c+mas[i];
    cout << '\n' << "Числа, которые меньше нуля = " << c << '\n';
}
//Функция определения возрастания или убывания массива
int dORi(int mas[],int i)
{
    int a;
    setlocale(LC_ALL,"RUS");
    for(int i=0,s=1; i<10 and s<10; i++ and s++)
    {
        if(mas[i]>mas[s]) cout << '\n' << "Массмв убывающий" << '\n';
        if(mas[s]>mas[i]) cout << '\n' << "Массив возрастающий" << '\n';
    }
}
//Функция поиска наибольшего и наименьшего числа
int search(int mas[],int i)
{
    for(i=0; i<10; i++)
    {
        if(mas[i]<2) cout << '\n' << "Меньшее число = " << mas[i] << '\n';
        if(mas[i]>9) cout << '\n' << "Большее число = " << mas[i] << '\n';
    }
}
//Функция возвращения индекса в вхождения в массив
/*
int Index(int mas[],int i)
{
    int s,b;
    cout << '\n' << "Введете значение" << '\n' << '\n';
    cin >> b;
    for(i=0; i<10; i++)
        if(mas[i]==b)
        {

        }
    cout << i;
}*/
//Функция вывода массива на экран
void output(int mas[],int i)
{
    cout << '\n' << "Массив" << '\n';
    for(i=0; i<10; i++) cout << mas[i] << ',';
}

int main()
{
    int mas[10],a,i;
    setlocale(LC_ALL,"RUS");
    cout << "Заполните массив" << '\n';
        filling(mas,a,i);
            NLTZ(mas,i);
                dORi(mas,i);
                    search(mas,i);
                        //Index(mas,i);
                            output(mas,i);
}
