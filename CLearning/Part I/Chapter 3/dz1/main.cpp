#include <iostream>
using namespace std;

int main()
{
    string first_name {""}, address {""}, message {""};
    
    cout << "Enter first name: ";
    cin >> first_name;
    
    cout << "Enter addressat: ";
    cin >> address;
    
    cout << "Enter message: ";
    cin >> message;
    
    cout << "===[Message]=====================" << '\n';
    cout << "Dear, " << address << ", " << message << '\n';
    cout << "=================================" << '\n';
}
