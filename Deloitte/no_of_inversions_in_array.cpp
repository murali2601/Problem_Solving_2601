#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int inversions = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                inversions++;
            }
        }
    }

    cout << "\nTotal Inversions: " << inversions << endl;
    return 0;
}

/* Problem Statement 5: An inversion in an array is a pair of indices i and j such that i < j and arr[i] > arr[j]. Given an array, count the number of inversions in the array. You need to implement an efficient solution with a time complexity better than O(n^2).

Input

The first line contains an integer N (1 ≤ N ≤ 10^5), the size of the array.
In the second line, there are N integers representing the array elements.
Output

Return the count of inversions in the array.

Test Cases

Input	
5
2 3 8 6 1
Output
5
Input
3
1 2 3
Output
0 */