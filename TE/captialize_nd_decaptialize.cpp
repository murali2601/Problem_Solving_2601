#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    getline(cin,s);
    char k;
    cin >> k;

    vector <char> v (s.begin(),s.end());

    for(char &i : v)
    {
        if(i == k)
        {
            i = toupper(i);
        }
    }

    for(auto i : v)
    {
        cout << i;
    }
    
    return 0;
}
/* 
OUTPUT : 

Murali Dharan
a
MurAli DhArAn */