//4.1.Вводятся строка и число. Вывести слово с номером, равным введенному числу.
#include <iostream>
using namespace std;
int main()
{
    char mas[20];
    int i,q=0,a;
    int k[10],e;
    cin >> mas;
    e=0;
    for(i=0; mas[i]!='\0'; i++)
    {
        if(mas[i+1]==','){}
        else
        {
            if(mas[i]==',')
            {
                q=q+1;
                k[e]=q;
                e++;
            }
        }
    }
    cin >> a;
    for(e=0; e<10; e++)
    {
        if(k[e]==a)
        {
            cout << k[e];
            for(i=0; mas[i]!=','; i++)
            {
                cout << mas[i];
            }
        }
    }
}
