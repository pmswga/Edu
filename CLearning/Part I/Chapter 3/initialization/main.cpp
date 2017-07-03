#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    a = 4;
    
    int b = a;
    b = a + 5;
    a = a + 7;
    
    int number_of_words = 0;
    string prev = "";
    string curr = "";
    
    while(cin >> curr)
    {
        number_of_words++;
        if(prev == curr)
        {
            cout << "Repeat word: " << curr << " before " << number_of_words << " words";
        }
        prev = curr;
    }
}
