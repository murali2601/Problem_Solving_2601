#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "aabbbbccccfffdddssssseeeerrrr";

    map<char, int> m;

    for (auto i : s)
    {
        m[i]++;
    }

    for (auto i : m)
    {
        cout << i.first << i.second;
    }
    return 0;
}