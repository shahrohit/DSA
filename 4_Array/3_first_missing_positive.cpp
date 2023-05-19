// https://www.codingninjas.com/codestudio/problems/first-missing-positive_699946

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findSmallestMissing(vector<int> &arr, int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            s.insert(arr[i]);
    }
    int i = 1;
    while (s.count(i))
    {
        i++;
    }
    return i;
}

int main()
{
    vector<int> arr{1, 4, -1, 3};
    cout << findSmallestMissing(arr, arr.size());
    return 0;
}