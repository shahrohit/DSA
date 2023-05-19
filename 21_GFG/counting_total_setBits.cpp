#include <iostream>
using namespace std;
int main()
{
    int N = 4;

    long long sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += __builtin_popcount(i);
    }
    cout << sum;

    return 0;
}