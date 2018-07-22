//3.1.Заполнить массив из 10 элементов числами от 0 до 9. Посчитать сумму элементов.
#include <iostream>
using namespace std;
int main()
{
  int mas[10],i,a,b=0;
  for(i=0; i<10; i++)
  {
      cin >> a;
      mas[i]=a;
      b=b+mas[i];
  }
  cout << b;
}
