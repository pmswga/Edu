#include <iostream>
using namespace std;

template <typename T>
struct Base
{
    void interface()
    {
        ((T*)this)->bar();
    }
};

struct frontEnd : Base<frontEnd>
{
    void bar()
    {
        cout << "Js";
    }
};


struct backEnd : Base<backEnd>
{
    void bar()
    {
        cout << "PHP";
    }
};




int main()
{
    frontEnd client;
    backEnd server;

    client.interface();
    server.interface();


}
