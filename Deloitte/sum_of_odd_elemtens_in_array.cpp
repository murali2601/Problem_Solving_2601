#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector <int> v = {1,1,1};
    
    int count  = 0;
    for(int i=0;i<v.size();i++)
    {
        int sum = 0;
        for(int j = i;j<v.size();j++)
        {
            sum += v[j];
            if(sum%2 != 0) count++;
        }
    }

    cout << count;

    return 0;
}

/* 
Example Breakdown
Example 1:
css
Copy
Edit
Input:
5
1 2 3 4 5
List of subarrays and their sums:

csharp
Copy
Edit
[1]     → sum = 1 (odd) ✅
[2]     → sum = 2 (even)
[3]     → sum = 3 (odd) ✅
[4]     → sum = 4 (even)
[5]     → sum = 5 (odd) ✅
[1,2]   → sum = 3 (odd) ✅
[2,3]   → sum = 5 (odd) ✅
[3,4]   → sum = 7 (odd) ✅
[4,5]   → sum = 9 (odd) ✅
[1,2,3] → sum = 6 (even)
[2,3,4] → sum = 9 (odd) ✅
[3,4,5] → sum = 12 (even)
[1,2,3,4] → sum = 10 (even)
[2,3,4,5] → sum = 14 (even)
[1,2,3,4,5] → sum = 15 (odd) ✅
Total odd sum subarrays = 9

Example 2:
css
Copy
Edit
Input:
3
1 1 1
Possible subarrays:

csharp
Copy
Edit
[1]  → odd ✅
[1]  → odd ✅
[1]  → odd ✅
[1,1] → even
[1,1] → even
[1,1,1] → odd ✅
Total odd sum subarrays = 4 */