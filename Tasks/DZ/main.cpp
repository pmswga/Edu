#include <iostream>
#include <stdio.h>
using namespace std;

int N(char* mas, int i, int b)
{
    while(mas[i]!='\0')
    {
        if(mas[i]==' ')
        {
            b=b+1;
        }
        i++;
    }
    return b;
}


int Search(char* mas, char* a, int y, int i)
{
    int z=0;
    while(mas[i]!='\0')
    {
        if(mas[i]==a[z])
        {
            if(mas[i]==' ' or mas[i]=='.' or mas[i]==',' or mas[i]=='!' or mas[i]=='?')
            {
                y=y+1;
                z=0;
            }
            else
            {
                i++;
                z++;
            }
        }
        else
        {
            i++;
        }
        i++;
    }
    return y;
}

int main()
{
    FILE *fp;
    int b=0,y=0,i=0;
    char *mas=new char[100];
    char *a=new char[30];
    setlocale(LC_ALL,"RUS");
    fp=fopen("My.txt","r");
    cin >> a;
    while(feof(fp)==false)
    {
        fgets(mas,100,fp);
        b=b+N(mas,i,b);
        Search(mas,a,y,i);
    }
    cout << y;
}
