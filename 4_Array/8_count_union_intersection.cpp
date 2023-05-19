// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int countUnion(vector<int> &A, vector<int> &B)
{
    int m = A.size();
    int n = B.size();
    unordered_map<int, int> map;

    for (int i = 0; i < m; i++)
    {
        map[A[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        map[B[i]]++;
    }

    return map.size();
}

int countIntersection(vector<int> &A, vector<int> &B)
{
    int m = A.size();
    int n = B.size();
    int count = 0;
    unordered_map<int, bool> map;

    for (int i = 0; i < m; i++)
    {
        map[A[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (map[B[i]])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> A{1, 2, 3, 4, 5};
    vector<int> B{1, 2, 6};

    cout << "Total union : " << countUnion(A, B) << endl;
    cout << "Total intersection : " << countIntersection(A, B);

    return 0;
}