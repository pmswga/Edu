#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*!
    @name main.cpp
    @brief Конечный автомат, который допускает следующую строку "create method name(a, b, c) in class"
*/

typedef unsigned int (uint);

enum PCODE_ERROR
{
    SYNTAX_ERROR,
    SYNTAX_OK
};

class PCode
{
    int a;

public:
    PCode(int a) : a(a)
    {

    }

    static PCODE_ERROR createClass(string command /*, user function */)
    {
        string class_name = "";
        int state = 0;
        for (uint i = 0; i <= command.size(); i++)
        {
            char c = (i < command.size()) ? command[i] : ' ';
            switch (state)
            {
            case 0:
                {
                    if (c == 'c') state = 1;
                    else state = 15;
                } break;
            case 1:
                {
                    if (c == 'r') state = 2;
                    else state = 15;
                } break;
            case 2:
                {
                    if (c == 'e') state = 3;
                    else state = 15;
                } break;
            case 3:
                {
                    if (c == 'a') state = 4;
                    else state = 15;
                } break;
            case 4:
                {
                    if (c == 't') state = 5;
                    else state = 15;
                } break;
            case 5:
                {
                    if (c == 'e') state = 6;
                    else state = 15;
                } break;
            case 6:
                {
                    if (c == ' ') state = 7;
                    else state = 15;
                } break;
            case 7:
                {
                    if (c == 'c') state = 8;
                    else state = 15;
                } break;
            case 8:
                {
                    if (c == 'l') state = 9;
                    else state = 15;
                } break;
            case 9:
                {
                    if (c == 'a') state = 10;
                    else state = 15;
                } break;
            case 10:
                {
                    if (c == 's') state = 11;
                    else state = 15;
                } break;
            case 11:
                {
                    if (c == 's') state = 12;
                    else state = 15;
                } break;
            case 12:
                {
                    if (c == ' ') state = 13;
                    else state = 15;
                } break;
            case 13:
                {
                    if (c != ';')
                    {
                        class_name += c;
                    } else {
                        state = 14;
                    }
                } break;
            case 14:
                {
                    return SYNTAX_OK;
                } break;
            case 15:
                {
                    return SYNTAX_ERROR;
                } break;
            }
        }
    }

};

int main()
{
    setlocale(LC_ALL, "RUS");


    string command;
    cout << ":>> ";
    getline(cin, command);

    string method_name = "";
    string class_name = "";
    vector<string> args;
    string arg;

    int state = 0;
    char c = ' ';
    for (uint i = 0; i <= command.size(); i++)
    {
        c = (i < command.size()) ? command[i] : ' ';
        switch (state)
        {
        case -1:
            {
                cerr << "Error" << '\n';
            } break;
        case 0:
            {
                if (c == 'c') state = 1;
                else state = -1;
            } break;
        case 1:
            {
                if (c == 'r') state = 2;
                else state = -1;
            } break;
        case 2:
            {
                if (c == 'e') state = 3;
                else state = -1;
            } break;
        case 3:
            {
                if (c == 'a') state = 4;
                else state = -1;
            } break;
        case 4:
            {
                if (c == 't') state = 5;
                else state = -1;
            } break;
        case 5:
            {
                if (c == 'e') state = 6;
                else state = -1;
            } break;
        case 6:
            {
                if (c == ' ') state = 7;
                else state = -1;
            } break;
        case 7:
            {
                if (c == 'm') state = 8;
                else state = -1;
            } break;
        case 8:
            {
                if (c == 'e') state = 9;
                else state = -1;
            } break;
        case 9:
            {
                if (c == 't') state = 10;
                else state = -1;
            } break;
        case 10:
            {
                if (c == 'h') state = 11;
                else state = -1;
            } break;
        case 11:
            {
                if (c == 'o') state = 12;
                else state = -1;
            } break;
        case 12:
            {
                if (c == 'd') state = 13;
                else state = -1;
            } break;
        case 13:
            {
                if (c == ' ') state = 14;
                else state = -1;
            } break;
        case 14:
            {
                if (c != '(')
                {
                    method_name += c;
                    state = 14;
                } else state = 15;
            } break;
        case 15:
            {
                if ((c != ',') && (c != ')')) arg += c;
                else {
                    args.push_back(arg);
                    arg.clear();

                    switch (c)
                    {
                    case ',': state = 15; break;
                    case ')': state = 16; break;
                    }
                }
            } break;
        case 16:
            {
                if (c == ' ') state = 17;
                else state = -1;
            } break;
        case 17:
            {
                if (c == 'i') state = 18;
                else state = -1;
            } break;
        case 18:
            {
                if (c == 'n') state = 19;
                else state = -1;
            } break;
        case 19:
            {
                if (c == ' ') state = 20;
                else state = -1;
            } break;
        case 20:
            {
                if (c != ';') class_name += c;
                else if (c != ';') state = -1;
            }
        }
    }

    cout << "Method: " << method_name << '\n';

    cout << '\n';

    cout << "With args: " << '\n';
    for (int i = 0; i < args.size(); i++)
    {
        cout << "Arg " << i << " is [" << args[i] << "]" << '\n';
    }

    cout << '\n';

    cout << "For class: " << class_name << '\n';

}
