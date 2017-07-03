#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

class Object
{
public:
    bool operator ()(int a, int b)
    {
        return (a > b) ? true : false;
    }

};

int main()
{
    const size_t N = 3;
    int A[N] = {1, 3, 2};
    sort(A, N + A, greater<int>());

    for(int i = 0; i < N; i++) cout << A[i] << ' ';

}
