#include <iostream>
#include <vector>
using namespace std;

class Super
{
public:

    Super() {}

    virtual void method() = 0;

};

class Sub_1 : public Super
{
public:
    Sub_1() : Super()
    {

    }

    void method()
    {
        cout << "Sub_1" << '\n';
    }

};

class Sub_2 : public Super
{
public:
    Sub_2() : Super()
    {

    }

    void method()
    {
        cout << "Sub_2" << '\n';
    }

};

int main()
{
    vector<Super*> v;
    v.push_back(new Sub_1());
    v.push_back(new Sub_2());

    for (Super *s : v) {
        s->method();
    }


}
