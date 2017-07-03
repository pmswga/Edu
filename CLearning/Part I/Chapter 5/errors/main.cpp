#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

void error(string s)
{
    throw runtime_error(s);
}

int main()
{
    setlocale(LC_ALL, "RUS");

    try
    {
        int a = 0;
        cin >> a;

        if(cin) cout << ++a << '\n';
        else error("Error");
    }
    catch(exception &e)
    {
        cerr << e.what() << '\n';
        return 1;
    }

    try
    {
        vector<int> v(100);

        cout << v.at(400);
    }
    catch(out_of_range)
    {
        cerr << "Выход за рамки вектора" << '\n';
        return 1;
    }
    catch(...)
    {
        cerr << "Что-то пошло не так" << '\n';
        return 2;
    }
}
