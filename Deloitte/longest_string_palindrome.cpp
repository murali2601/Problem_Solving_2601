#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    string s = "racecar";

    int i = 0,count = 0;
    auto left = s.begin();
    auto right = s.end()-1;
    while(i < s.length())
    {
        if(*left == *right)
        {
        //    cout << "yes";
           count++;
        }
        else{
            // cout << "no;";
        }
        left++;right--;
        i++;
    }
    // cout << (count > 1) ? count : 0;
    cout << count;
    return 0;
}


/* 
Problem Statement 2: Given a string, find the length of the longest palindromic substring. A palindromic string reads the same forwards and backward. You must implement an efficient solution to find this substring.

Input

A string S with a length between 1 and 1000.

Output

Output the length of the longest palindromic substring.

Test Cases

Input	Output
Babad	3
cbbd	2 */