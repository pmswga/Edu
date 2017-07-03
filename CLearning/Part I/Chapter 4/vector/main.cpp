#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*!
        Реализация защиты от "дурака"

        while(cin.good())
        {
            for(int a = 0; cin >> a; )
            {
                cout << a;
            }
            if(cin.fail())
            {
                cin.clear();
                cin.sync();
                cout << "Error input " << '\n';
            }
        }

    */

    setlocale(LC_ALL, "RUSSIAN");
    vector<int> integers = {1, 2, 3, 4, 5, 6};
    vector<string> names = {"Ser", "Anton", "Roma", "Kim"};

    for(int _int : integers) cout << _int << " ";
    cout << '\n';
    for(string name : names) cout << name << " ";
    cout << '\n';

    vector<double> temps;
    for(double temp; cin >> temp;) temps.push_back(temp);

    cout << "Значение температур: " << '\n';
    for(double t : temps) cout << t << " ";

    cout << '\n' << "Сортировка элементов: " << '\n';
    for(double t : temps) cout << t << " ";
}
