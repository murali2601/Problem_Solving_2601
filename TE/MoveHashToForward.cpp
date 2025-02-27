#include <iostream>
using namespace std;

int main()
{
    string s = "Move#Hash#To#Forward";

    string ans = "";

    for(auto i : s)
    {
        if(i == '#')
        {
            ans = '#' + ans;
        }
        else{
            ans = ans + i;
        }
    }

    cout << ans ;
    return 0;
}