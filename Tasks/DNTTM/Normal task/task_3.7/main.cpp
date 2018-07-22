//3.7.Написать программу, сортирующую массив методом пузырька.
#include <iostream>
using namespace std;
int main()
{
    int mas[10],a,i;
    for(int i=0; i<10; i++)
    {
        cin >> a;
        mas[i]=a;
    }
    for(int i=0; i<10; i++)
    {
        for(int l=1,i=0; l<10 and i<10; l++ and i++)
        {
            if(mas[i]>mas[l])
            {
                swap(mas[l],mas[i]);
            }
        }
    }
    for(int i=0; i<10; i++)cout << mas[i];
}
