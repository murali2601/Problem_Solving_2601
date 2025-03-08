#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aabbbddcckkssslllaaabb";
    map<char,int> m;

    for(auto i : s)
    {
        m[i]++;
    }

    for(auto k : m)
    {
        cout << k.first << k.second;
    }
    return 0;
}