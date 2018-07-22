//3.8 Отсортировать массив методом поиска наибольшего значения
#include <iostream>
using namespace std;

void InPut(int mas[], int a) {
    for(int i=0; i<a; i++) cin >> mas[i];
}

void Sorting(int mas[], int a, int maxx) { int b=0,c=9,y,i;
    while(b<a and c>4)
    {
        i=b;
        maxx=mas[b];
        while(i<a)
        {
            if(maxx<mas[i]) maxx=mas[i];
            i++;
        }
        y=mas[b];
        mas[b]=maxx;
        mas[c]=y;
        b++;
        c--;
    }
}

void OutPut(int mas[], int a){
    for(int i=0; i<a; i++) cout << mas[i];
}

int main(){ int a,maxx;
    cin >> a;
    int *mas=new int [a];
    InPut(mas,a);
    Sorting(mas,a,maxx);
    OutPut(mas,a);
}
