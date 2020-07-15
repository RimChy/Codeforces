#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.size();
    for (int i=0; i<len; i++)
    {
        if (s[i] != s[i+1])
        {
            cout << s[i];
        }
    }

    cout << endl;
}
