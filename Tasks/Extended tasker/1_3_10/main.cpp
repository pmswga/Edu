/*Объявите переменные целого типа, необходимые для вычисления площади прямоугольника.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int side_rect_a = 0, side_rect_b = 0, square = 0;

    while(true)
    {
        cout << "Задайте значения для вычисления площади прямоугольник." << '\n';
        cout << "Сторона a: ";
        cin >> side_rect_a;
        cout << "Сторона b: ";
        cin >> side_rect_b;

        square = side_rect_a * side_rect_b;
        cout << "\nПлощадь прямоугольника: " << square << '\n';
    }
}
