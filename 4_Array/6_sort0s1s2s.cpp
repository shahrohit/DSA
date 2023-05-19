// Dutch National Flag algorithm, also known as the Three - Way Partitioning algorithm.
#include <iostream>
#include <vector>
using namespace std;
void sort0s1s2s(vector<int> &nums)
{
    int high = nums.size() - 1; // Index for 2s (right boundary)
    int low = 0;                // Index for 0s (left boundary)
    int i = 0;                  // Iterator

    while (i <= high)
    {
        if (nums[i] == 0)
            swap(nums[i++], nums[low++]);

        else if (nums[i] == 2)
            swap(nums[i], nums[high--]); // note dont update the i as it is not fixed the we have swapped (0 and 2) or (1 and 2)

        else
            i++;
    }
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 1, 1, 2, 0, 1, 2};

    sort0s1s2s(nums);

    cout << "Sorted Array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}