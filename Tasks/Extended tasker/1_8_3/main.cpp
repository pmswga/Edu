///÷ифры ввод€тс€ с клавиатуры, конец ввода Ц нажатие 0, определить среднее арифметическое этих чисел.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, coutValues = 0;
    double middleSum = 0;
    for(coutValues; input != 0; coutValues++)
    {
        cin >> input;
        middleSum += input;
    }
    middleSum /= coutValues;
    cout << "—реднее арифметическое: " << middleSum << '\n';
}
