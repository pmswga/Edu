#include <iostream>
#include <string>
#include <string.h>
#include <stdexcept>
#include <windows.h>
#include <iomanip>
using namespace std;

class MenuException : exception
{
    string msg;

public:
    MenuException(string msg) : msg(msg), exception()
    {

    }

    const char* what()
    {
        return this->msg.c_str();
    }

};

class Menu
{

public:

    enum Prompt {
        OK  = 0,
        YES = 1,
        NO  = 2
    };


    enum Operations {
        ADD    = 0,
        CHANGE = 1,
        REMOVE = 2,
        GET    = 3,
        IMPORT = 4,
        EXPORT = 5,
        ABOUT  = 6,
        EXIT   = 7
    };

    static void show()
    {
        cout << "--[Добро пожаловать]--" << '\n';
        cout << "1." << '\n';
        cout << "2." << '\n';
        cout << "3." << '\n';
        cout << "4." << '\n';
        cout << "5." << '\n';
        cout << "6. О программе" << '\n';
        cout << "7. Выход" << '\n';
    }

    static int input(int operation)
    {

        switch (operation)
        {
        case ADD:


            break;
        case CHANGE:


            break;
        case REMOVE:


            break;
        case GET:


            break;
        case IMPORT:


            break;
        case EXPORT:


            break;
        case EXIT:
        {

            if (question("Вы действительно хотите поику") == YES) {
                return EXIT_SUCCESS;
            }

        } break;
        default:
                throw new MenuException("Не возможно выполнить выбранную операцию");
            break;
        }
    }

    static void message(string msg)
    {
        cout << setw(msg.length()) << "---[Сообщение]---" << '\n';
        cout << setw(msg.length()) << msg << '\n';

        cin.get();
    }

    static bool question(string msg)
    {
        int input(0);
        while (true)
        {
            clearScreen();

            cout << msg << '\n';
            cout << "1. Да" << '\n';
            cout << "2. Нет" << '\n';
            cin >> input;

            if (cin.good()) {

                switch (input)
                {
                case YES:
                    {
                        return true;
                    } break;
                case NO:
                    {
                        return false;
                    } break;
                }

            } else {
                cout << "Некорректный ввод" << '\n';
                Sleep(2500);
                cin.clear();
                cin.sync();
            }

        }
    }

    static void clearScreen()
    {
        system("cls");
    }

};


#define DEVELOPER_BUILD 0
#if DEVELOPER_BUILD == 1

int main(int argc, char *argv[])

#else

int main()

#endif
{

#if DEVELOPER_BUILD == 1

    cout << "Path to exe file: " << argv[0] << '\n';
    cout << "Count of cmd arguments: " << argc << '\n';

    if (argc > 0) {
        if (argv[1] != nullptr) {
            if (strcmp(argv[2], "devolper") == 0) {

            }

        }

    }

#endif
    setlocale(LC_ALL, "RUSSIAN");
    int input(0);

    Menu::message("It's meseeeeeeeeesage");

    while (true)
    {
        try
        {
            Menu::clearScreen();
            Menu::show();

            cout << '\n' << "[Выберете пункт меню]: ";
            cin >> input;

            if (cin.good()) {
                Menu::input(input);
            } else {
                cout << "Некорректный ввод" << '\n';
                Sleep(2500);
                cin.clear();
                cin.sync();
            }
        } catch (MenuException *excpet) {
            cerr << excpet->what() << '\n';
        }
    }

}
