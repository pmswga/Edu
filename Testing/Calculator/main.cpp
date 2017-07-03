#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*!

    Грамматика

    Выражение:
        Терм
        Выражение "+" Терм
        Выражение "-" Терм

    Терм:
        Первичное_выражение
        Терм "*" Первичное_выражение
        Терм "/" Первичное_выражение

    Первичное_выражение:
        Число
        "(" Выражение ")"

    Число:
        Литерал_с_плавающей_запятой

*/


class Token
{
public:
    char kind;
    double value;

};

Token get_token();
double expression();
double term();
double primary();


double expression()
{
    double left = term();
    Token t = get_token();
    while (true)
    {
        switch(t.kind)
        {
        case '+':
            left += term();
            t = get_token();
            break;

        case '-':
            left -= term();
            t = get_token();
            break;

        default:
            return left;

        }
    }
}

double term()
{
    double left = primary();
    Token t = get_token();
    while (true)
    {
        switch (t.kind)
        {
        case '*':
            left *= primary();
            t = get_token();
            break;

        case '/':
            {
                double d = primary();
                if (d == 0)
                {
                    cerr << "Деление на нуль" << '\n';
                }

                left /= d;
                t = get_token();
            } break;
        default:
            return left;

        }
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");

    int lval = 0;
    int rval = 0;

    cout << "Выражение (+, -, *, /): ";

    cin >> lval;

    if (!cin.good()) {
        cerr << "Нету первого операнда" << '\n';
    }

    for (char op; cin >> op; ) {

        if (op != 'x') {
            cin >> rval;
        }

        if (!cin.good()) {
            cerr << "Нету первого операнда" << '\n';
        }


        switch (op)
        {
        case '+':
            lval += rval;
            break;

        case '-':
            lval -= rval;
            break;

        case '*':
            lval *= rval;
            break;

        case '/':
            lval /= rval;
            break;

        default:
            cout << "Результат: " << lval << '\n';
            return 0;
        }

    }

    cout << "Неверное выражение";
}
