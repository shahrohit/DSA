// https://www.codingninjas.com/codestudio/problems/second-largest-element-in-the-array_873375
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int secondLargest(vector<int> &arr)
{
    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second and arr[i] != first)
            second = arr[i];
    }

    if (second == INT_MIN)
        return -1;
    return second;
}
int main()
{
    vector<int> arr{5, 2, 0, 1, 2, 1};
    // vector<int> arr{2, 2, 2, 2, 2};

    cout << secondLargest(arr);
    return 0;
}