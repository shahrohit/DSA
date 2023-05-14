// https://www.codingninjas.com/codestudio/problems/rotate-array_1230543

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<int> &arr, int &k)
{
    int n = arr.size();
    k = k % n;
    if (k < 1)
        return;

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7};
    int k = 7;
    rotate(nums, k);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}