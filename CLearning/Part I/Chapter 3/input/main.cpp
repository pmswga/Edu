#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter your name: ";
    
    string first_name;
    cin >> first_name;
    
    cout << "Hello, " << first_name << '\n';
    
    
    /*! Основные типы*/
    
    int number_of_steps = 39; // Для целых чисел
    double flying_time = 3.5; // (dobule precision floating point) Для дробных чисел
    char decimal_point = '.'; // Для одного символа
    string name = "Annemarie"; // Для строк
    bool tap_on = true; // Для логических перменных
    
    /*! Ввод информации */
    
    cout << "Pleae enter your name and age: ";
    first_name = "???";
    
    double age = -1;
    
    cin >> first_name >> age;
    
    cout << "Hello, " << first_name << " (age " << (age * 12) << " months)" << '\n';
}
