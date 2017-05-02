#include <iostream>
#include <cstdio>
#include <fstream>
#include <windows.h>
#include "Sources files\.h files\Class_CFiles.h"
#include "Sources files\.h files\Class_CCreateFile.h"
#include "Sources files\.h files\Function.h"
using namespace std;

BOOL SetCursorPos
(
    int X,	// горизонтальная позиция
    int Y	// вертикальная позиция
);

BOOL GetCursorPos
(
    LPPOINT lpPoint	// позиция курсора
);


static int programmspeed = 300;
bool yes = true;

int main(int argc,char *argv[])
{
    register int in;
    Function func;
    //func.protection(argv,yes,password,password2);
    setlocale(LC_ALL,"RUS");

    CFiles first;
    CCreateFile file;
    CSuppot sup;

    file.Create_readme();
    file.Create_Floder_DB();
    while(GetAsyncKeyState(VK_ESCAPE) == 0)///Основной цикл программы
    {
        POINT cp;
        GetCursorPos(&cp);
        system("cls");
        func.menu();
        Sleep(programmspeed);
        if( (cp.x > 0,cp.x <97 and cp.y > 34,cp.y < 46) and (GetAsyncKeyState(VK_RBUTTON) != 0) )///Создание файла
        {
            while(GetAsyncKeyState(VK_BACK) == 0)
            {
                system("cls");
                first.Create_file();///Функция для создания файла
                system("cls");
                cout << "Хотите начать редактирование файал?" << '\n';
                cout << "1.Да/2.Нет" << '\n' << '\n';
                cin >> in;
                if(in == 1) first.Edit_file(); break;
                Sleep(programmspeed);
            }
        }

        if( (cp.x > 0,cp.x <97 and cp.y > 50,cp.y < 57) and (GetAsyncKeyState(VK_RBUTTON) != 0) )///Удаление файла
        {
            while(GetAsyncKeyState(VK_BACK) == 0)
            {
                system("cls");
                first.Delete_file();///Функция для удаления файла
                Sleep(programmspeed);
            }
        }

        if( (cp.x > 0,cp.x <154 and cp.y > 61,cp.y < 69) and (GetAsyncKeyState(VK_RBUTTON) != 0) )///Редактирование файла
        {
            while(GetAsyncKeyState(VK_BACK) == 0)
            {
                system("cls");
                first.Edit_file();///Функция для редактирования файла
                Sleep(programmspeed);
            }
        }

        if( (cp.x > 0,cp.x <137 and cp.y > 74,cp.y < 81) and (GetAsyncKeyState(VK_RBUTTON) != 0) ) first.View_file();///Показ файла

        if( (cp.x > 0,cp.x <89 and cp.y > 85,cp.y < 94) and (GetAsyncKeyState(VK_RBUTTON) != 0) )///Показ всех папок
        {
            while(GetAsyncKeyState(VK_BACK) == 0)
            {
                system("cls");
                system("tree");///Показывает в графическом виде все папки, не знаю почему не отоброжает файлы
                first.View_DB();
                Sleep(programmspeed);
            }
        }

        if( (cp.x > 0,cp.x <71 and cp.y > 97,cp.y < 102) and (GetAsyncKeyState(VK_RBUTTON) != 0) )
        {
            while(GetAsyncKeyState(VK_BACK) == 0)
            {
                system("cls");
                func.options();
                if(GetAsyncKeyState(VK_F1) != 0)
                {
                    sup.delete_DB();
                }
                if(GetAsyncKeyState(VK_F1) != 0)
                {
                    sup.delete_Readme();
                }
                Sleep(programmspeed);
            }
        }

        if( (cp.x > 0,cp.x <34 and cp.y > 110,cp.y < 117) and (GetAsyncKeyState(VK_RBUTTON) != 0) )///Инфо о программе
        {
            while(GetAsyncKeyState(VK_BACK) == 0)
            {
                system("cls");
                func.info();
                Sleep(programmspeed);
            }
        }

        if(GetAsyncKeyState(VK_TAB) != 0)///Перезапуск программы
        {
            system("start Test.exe");///Запускается эта программа ещё раз
            return EXIT_SUCCESS;///А старая программа закрывается
        }

        if(GetAsyncKeyState(VK_INSERT) != 0)
        {
            while(GetAsyncKeyState(VK_BACK) == 0)
            {
                system("cls");
                func.view_all(yes,argc,argv,password,password2,in,programmspeed);
                Sleep(programmspeed);
            }
        }
    }
    system("cls");
    cout << "Завершение";
    func.load();
}
