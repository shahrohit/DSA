// https://practice.geeksforgeeks.org/problems/max-min/1
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int findSum(vector<int> &arr)
{
    int n = arr.size();
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    return maxi + mini;
}
int main()
{
    vector<int> arr{1, 3, 4, 1};
    cout << findSum(arr);
    return 0;
}