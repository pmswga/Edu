#include <iostream>
#include <math.h>
#include <windows.h>
#include <typeinfo>
using namespace std;

enum Errors
{
    INCORRECT_INPUT,
    INCORRECT_FACTOR_A,
    DISCRIMINANT_SMALLER_ZERO
};

int main()
{
    setlocale(LC_ALL, "RUS");
    int a = 0, b = 0, c = 0;
    double x_1 = 0, x_2 = 0, d = 0;

    try
    {
        cout << "Enter a, b, c: ";
        if(cin >> a >> b >> c)
        {
            if(a != 0)
            {
                d = pow(b, 2) - 4 * a * c;
                if(d > 0)
                {
                    x_1 = (-b + sqrt(d))/(2*a);
                    x_2 = (-b - sqrt(d))/(2*a);

                    system("cls");
                    cout << "Действительных корней 2: " << '\n';
                    cout << "x1 = " << x_1 << '\n';
                    cout << "x2 = " << x_2 << '\n';
                }
                else if(d == 0)
                {
                    x_1 = -(b/(2*a));

                    system("cls");
                    cout << "Корнь 1: " << '\n';
                    cout << "x1 = x2 = " << x_1 << '\n';
                }
                else throw DISCRIMINANT_SMALLER_ZERO;
            }
            else throw INCORRECT_FACTOR_A;
        }
        else throw INCORRECT_INPUT;
    }
    catch(Errors error)
    {
        switch(error)
        {
        case INCORRECT_INPUT: cerr << "INCORRECT INPUT" << '\n'; break;
        case INCORRECT_FACTOR_A: cerr << "Factor a <= 0 " << '\n'; break;
        case DISCRIMINANT_SMALLER_ZERO: cerr << "D < 0 " << '\n'; break;
        }
        return error;
    }
}
