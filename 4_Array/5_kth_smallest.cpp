#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int kthSmallest(vector<int> &arr, int &k)
{

    if (k == arr.size())
    {
        auto a = max_element(arr.begin(), arr.end());
        return *a;
    }
    // max heap
    priority_queue<int> pq;

    // store the element from 0 to (k-1)th index in descending order
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    // the first element will be greater
    // now traverse from kth to (n-1)the index
    for (int i = k; i < arr.size(); i++)
    {
        // if any element is less than the top then pop the greater number and push the current element
        if (arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    // top element will be the kth smallest
    return pq.top();
}

int main()
{
    vector<int> arr{5, 1, 2, 7, 9};
    int k = 5;
    cout << kthSmallest(arr, k);
    return 0;
}