//4.6 Вывести обьединение двух строк
#include <iostream>
using namespace std;

void mas1_mas2(char* mas1, char* mas2, char* mas3)
{
    int x=0,y=0,z=0;
    while(mas3[z]!='\0')
    {
        do
        {
            mas3[z] = mas1[x];
            x++;
            z++;
        }while(mas1[x]!='\0');
        do
        {
            mas3[z] = mas2[y];
            y++;
            z++;
        }while(mas2[y]!='\0');
    }
}

int main()
{
    setlocale(LC_ALL,"RUS");
    int size;
    cout << "Заполните первую строку" << '\n';
    char *mas1 = new char[20];
    cin >> mas1;
    cout << "Заполните вторую строку" << '\n';
    char *mas2 = new char[15];
    cin >> mas2;
    size = 20 + 15;
    char *mas3 = new char[size];
    mas1_mas2(mas1,mas2,mas3);
    cout << mas3;
}
