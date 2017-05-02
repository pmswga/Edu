/*Определите исходные данные и объявите переменные, необходимыедля вычисления дохода по вкладу*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    float start_capital = 0, precent = 10.5, days = 0, calendar_days = 365;
    float s = 0, sp = 0;

    cout << "Введите сумму вклада: ";
    cin >> start_capital;
    cout << "Введите процентную ставку: ";
    cin >> precent;
    cout << "Введите кол-во дней начисления процентов: ";
    cin >> days;

    s = start_capital * ( start_capital * precent * (days / calendar_days) );
    sp = (start_capital * precent * (days / calendar_days) ) / 100;

    cout << "\n========================\n";
    cout << "Процентная ставка: " << precent << "%" << '\n' << "Кол-во дней начисления процентов: " << days << '\n';
    cout << "\nИТОГО:" << '\n';
    cout << "Доход(В %) = " << sp << '\n' << "Сумма вклада с процентом = " << s << '\n';
}
