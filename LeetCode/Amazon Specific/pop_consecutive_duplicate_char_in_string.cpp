#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s = "abccba"; //remove contiguous repeating character from string

    vector<char> v(s.begin(),s.end());

    for(int i=0; i < v.size();i++)
    {
        if(v[i] == v[i+1])
        {
            v.erase(v.begin()+i);
            v.erase(v.begin()+i+1);
            i = 0;

        }
    }

    for(auto i : v)
    {
        cout << i << " ";
    }
}