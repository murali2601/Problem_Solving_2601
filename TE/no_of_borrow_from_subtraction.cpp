#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    int c = 0, f = 0;

    cin >> s1 >> s2;

    if (stoi(s1) > stoi(s2)) {
        cout << "Not possible" << endl;
        return 0;
    }

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] < s2[i]) {
            f = 1;
            c++;
        } 
        else if (s1[i] == s2[i]) {
            if (f == 1) {
                c++;
            }
            f = 0;
        } 
        else {
            f = 0;
        }
    }

    cout << c << endl;
    return 0;
}

/* You have two numbers number1 and number2, your job is to check the number of borrow operations needed for subtraction of number1 from number2. If the subtraction is not possible then return the string not possible.

Example :

754
658

Answer :
2

654
666

Answer :
Not possible */