#include <iostream>
#include "Crypt.h"
using namespace std;

inline void OutMenu()
{
    cout << "1. Зашифровать строку" << '\n';
    cout << "2. Расшифровать строку" << '\n' << '\n';
}

int main()
{
    setlocale(LC_ALL, "RUS");
    Crypt *crypt = new Crypt();
    crypt->ReadFileABC("abc.txt");

    //char *stringData = new char;
    //register int input = 0;
/*
    while(true)
    {
        system("cls");
        OutMenu();
        cout << ">: "; cin >> input;
        switch(input)
        {
        case 1:
            {
                cout << "Ваша строка: ";
                cin >> stringData;
                crypt->Encryption(stringData, strlen(stringData));
            }break;
        case 2:
            {
                system("cls");
                for(int i = 0; i < strlen(stringData); i++) for(int i2 = 0; i2 < englishABCLength; i2++) if(stringData[i] == abc[i2]) stringData[i] = abc[i2 -= 2];
                WriteResult(stringData, "Результат расшифрования: ");
                cout << '\n' << "Результат записан в файл result.txt" << '\n';
                Sleep(5000);
            }break;
        }
    }
    */
}
