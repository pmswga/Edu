#include <iostream>
using namespace std;

void ALL()
{
    int a,mas[10];
    float k=0;
    for(int i=0; i<10; i++)
    {
        cout << "Индекс " << i << " = ";
        cin >> a;
        mas[i]=a;
        k=k+mas[i];
    }
    k=k/9;
    cout << "Серднее арифиметическое" << " = " << k << '\n';
    for(int i=0; i<10; i++)
        for(int l=1,i=0; l<10 and i<10; l++ and i++)
        {
            if(mas[i]>mas[l])
            {
                swap(mas[l],mas[i]);
            }
        }
    cout << "Отсортированный массив" << '\n';
    for(int i=0; i<10; i++)cout << mas[i] << ",";
}

int main()
{
    setlocale(LC_ALL,"RUS");
    cout << "Вводите числа" << '\n';
    ALL();
}
