//4.5
#include <iostream>
using namespace std;
int main()
{
    int i=0,g=0;
    char mas[10],b;
    cin >> mas;
    cin >> b;
    while(mas[i]!='\0')
    {
        if(mas[i]==b)
        {
            b=mas[i];
            g=g+1;
        }
        i++;
    }
    cout << g;
}
