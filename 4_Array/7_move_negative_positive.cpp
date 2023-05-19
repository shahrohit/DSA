// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include <iostream>
#include <vector>
using namespace std;

void moveNegativePositive(vector<int> &arr)
{
    int i = 0;
    int j = arr.size() - 1;

    while (i <= j)
    {
        if (arr[i] >= 0 and arr[j] < 0)
            swap(arr[i++], arr[j--]);

        else if (arr[i] < 0)
            i++;
        else
            j--;
    }
}

int main()
{
    vector<int> nums{1, 3, -2, -8, -4, 9, 0, 6, 2, 4};
    moveNegativePositive(nums);
    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}