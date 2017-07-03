#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> _map(10, vector<char>(10, 10));

int main()
{

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++) cout << _map[i][j];
        cout << '\n';
    }

}
