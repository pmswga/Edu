#include <iostream>
using namespace std;

void Sorting(int mas[], int t)
{
    int q;
    for(int i=0; i<t; i++)
        for(int l=1,i=0; l<t and i<t; l++ and i++)
        {
            if(mas[i]>mas[l])
            {
                q=mas[i];
                mas[i]=mas[l];
                mas[l]=q;
            }
        }
}

void InPut(int y, int v[])
{
    for(int i=0; i<y; i++)
    {
        cout << "Индекс " << i << " = ";
        cin >> v[i];
    }
}

void In(int mas[], int v[], int u[], int a, int b)
{
    int y=0,l=0,i,c;
    c=a+b;
    while(i<a or y<b)
    {
        if(v[i]<u[y])
        {
            mas[l]=v[i];
            i++;
        }
        else
        {
            mas[l]=u[y];
            y++;
        }
        l++;
    }
    while(l<c)
    {
        if(y==a)
        {
            mas[l]=v[i];
            y++;
        }
        else
        {
            mas[l]=u[y];
            i++;
        }
        l++;
    }
}

void Output(int mas[], int c)
{
    cout << '\n' << "Отсротированный массив" << '\n';
    for(int i=0; i<c; i++) cout << mas[i] << ',';
}

int main()
{
    int a,b;
    int i,c;
    setlocale(LC_ALL,"RUS");
    cout <<"|==============================|"<<'\n'<<"|Задайте размер первого массива|"<<'\n'<<"|==============================|"<<'\n';
    cin >> a;
    int *v=new int [a];
    InPut(a,v);
    Sorting(v,a);
    cout <<"|==============================|"<<'\n'<< "|Задайте размер второго массива|"<<'\n'<<"|==============================|"<<'\n';
    cin >> b;
    int *u=new int [b];
    InPut(b,u);
    Sorting(u,b);
    c=a+b;
    int *mas=new int [c];
    In(mas,v,u,a,b);
    Output(mas,c);
    delete []v;
    delete []u;
    delete []mas;
}
