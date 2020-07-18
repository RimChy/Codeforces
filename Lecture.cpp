#include<bits/stdc++.h>
using namespace std;



int main()
{
    map<string, string> mp;

    int n, m;
    string s1, s2;
    cin >> n >> m;
    while(m--)
    {
        cin >> s1 >> s2;
        if(s1.length()>s2.length())
            mp[s1] = s2;
        else
            mp[s1] = s1;
    }
    while(n--)
    {
        cin >> s1;
        cout << mp[s1] << " ";
    }
    cout << endl;
    return 0;
}
