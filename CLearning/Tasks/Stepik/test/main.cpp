#include <iostream>
using namespace std;

typedef unsigned int uint;

const int default_count = 1000;

struct Polygon_number
{
    double value;
    int i;

    bool is_Polygon_Number(double number)
    {
        return (value == number) ? true : false;
    }

};

Polygon_number* pre_evaluate(uint __count = default_count)
{
    Polygon_number *p_numbers = new Polygon_number[__count];

    for (uint i = 0, n = 0; i < __count; i++, n++)
    {
        p_numbers[i].value = (n*(n+1))/2;
        p_numbers[i].i = i;
    }

    return p_numbers;
}

int main()
{
    Polygon_number *result = pre_evaluate();

    if (result != NULL)
    {
        double value;

        cin >> value;
        if (cin.good())
        {
            bool is_found = false;
            for (uint i = 0; (i < default_count) || (!is_found); i++)
            {
                if (result[i].is_Polygon_Number(value))
                {
                   cout << "Pos: " << result[i].i << '\n';
                   is_found = true;
                }
            }
        }
    }

}
