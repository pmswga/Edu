#include <iostream>
using namespace std;

class CList
{
public:
    int value;
    CList* next;
    CList(int number)
    {
        value = number;
        next = NULL;
    }
};

CList* add(CList **begin, int number)
{
    *begin = new CList(number);

    CList *end = *begin;
    end->value = number;

    for(int i = 0; i < 10; i++)
    {
        end->next = new CList(number);
        end = end->next;
        number++;
    }
}

void remove(CList **begin, int number)
{
    CList *t = *begin;

    if(t->value == number)
    {
        *begin = t->next;
        delete t;
        return;
    }

    CList *t1 = t->next;

    while(t1 != NULL)
    {
        if(t1->value == number)
        {
            t->next = t1->next;
            delete t1;
            return;
        }
        t = t1;
        t = t1->next;
    }
}

void output(CList *b)
{
    CList *print = b;
    print->value = 0;
    while(print != NULL)
    {
        cout << print->value << "->";
        print = print->next;
    }
    cout << "NULL" << '\n';
}

int main()
{
    setlocale(LC_ALL,"RUS");
    int number = 1;

    CList* begin = NULL;

    add(&begin,number);
    output(begin);
    number = 3;
    remove(&begin,number);
    output(begin);
}
