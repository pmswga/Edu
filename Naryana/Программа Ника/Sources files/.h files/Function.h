#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <iostream>
#include <cstdio>
#include <windows.h>
#include <string>
using namespace std;

class Function
{
public:
    void menu()
    {
        FILE* fp;
        char *mas = new char[40];
        fp = fopen("Data/Menu.txt","r");
        while(feof(fp) == false)
        {
            fgets(mas,40,fp);
            cout << mas;
        }
        fclose(fp);
        delete []mas;
    }
    void info()
    {
        FILE* fp;
        char *mas = new char[40];
        fp = fopen("Data/info.txt","r");
        while(feof(fp) == false)
        {
            fgets(mas,40,fp);
            cout << mas;
        }
        fclose(fp);
        delete []mas;
    }
    void load()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << ".";
            Sleep(500);
        }
    }
    void options()
    {
        FILE* fp;
        char *mas = new char[40];
        fp = fopen("Data/Suppot.txt","r");
        while(feof(fp) == false)
        {
            fgets(mas,40,fp);
            cout << mas;
        }
        fclose(fp);
        delete []mas;
    }
    void protection(char *argv[], bool yes, string password, string password2)
    {
        while(yes)
        {
            system("cls");
            cout << "Enter password:";
            cin >> password;
            cout << "Password is not correct!" << '\n';
            if(password == password2) yes = false;
            if(argv[1] == password2) yes = false;
        }
    }
    void view_all(bool yes, int argc, char *argv[], string password, string password2, int in, int programmspeed)
    {
        cout << "Данные переменных:" << '\n' << '\n';
        cout << "bool yes = " << yes << '\n';
        cout << "int argc = " << argc << '\n';
        cout << "int in = " << in << '\n';
        cout << "int programmspeed = " << programmspeed << '\n';
        cout << "char *argv[] = " << argv[0] << '\n';
        cout << "string password = " << password << '\n';
        cout << "string password2 = " << password2 << '\n';
    }
};


string password;
string password2 = "root";

class CSuppot
{
public:
    void delete_DB()
    {
        system("RMDIR DB");
    }
    void delete_Readme()
    {
        system("RMDIR Readme");
    }
};

#endif
