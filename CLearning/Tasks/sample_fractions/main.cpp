#include <iostream>
using namespace std;

enum SampleFractionalError
{
    NOT_COMMON_DENOMINATOR,
    ZERO_RESULT
};

class SampleFractional {

    double numerator;
    double denominator;

public:
    SampleFractional(double num = 1, double denom = 1) : numerator(num), denominator(denom) {}

    friend ostream &operator << (ostream &stream, SampleFractional &sf)
    {
        stream << sf.getNumerator() << " / " << sf.getDenominator() << '\n';
        return stream;
    }

    friend SampleFractional operator + (SampleFractional a, SampleFractional b)
    {
        if (a.getDenominator() == b.getDenominator())
        {
            return SampleFractional(
                a.getNumerator() + b.getNumerator(),
                a.getDenominator()
            );
        } else throw NOT_COMMON_DENOMINATOR;
    }

    friend SampleFractional operator * (SampleFractional a, SampleFractional b)
    {
        return SampleFractional(
            a.getNumerator() * b.getNumerator(),
            a.getDenominator() * b.getDenominator()
        );
    }

    friend SampleFractional operator / (SampleFractional a, SampleFractional b)
    {
        return SampleFractional(
            a.getNumerator() * b.getDenominator(),
            a.getDenominator() * b.getNumerator()
        );
    }

    float toResult()
    {
        return numerator/denominator;
    }

    double getNumerator()
    {
        return numerator;
    }

    double getDenominator()
    {
        return denominator;
    }

};

int main()
{
    try
    {
        SampleFractional a(3, 2);
        SampleFractional b(2, 3);
        SampleFractional c = a / b;

        cout << c;

    } catch(SampleFractionalError e)
    {
        switch(e)
        {
        case NOT_COMMON_DENOMINATOR: cerr << "Нету общего знаменателя" << '\n'; break;
        }
    }



}
