class Solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
            sort(begin(nums),end(nums));
    
            return *(nums.end()-k);
        }
    };


/* Problem Statement 4: Given an unsorted array of integers, find the kth largest element in the array. You need to solve the problem efficiently, without sorting the array, using a priority queue (min-heap) or quick select algorithm.

Input

The first line contains two integers, N (size of array) and k.
In the second line, there are N integers representing the array elements.
Output

Output the kth largest element in the array.
Test cases

Input	
6 2
3 2 1 5 6 4
Output
5
Input
5 1
1 2 3 4 5
Output
5 */