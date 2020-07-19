#include<bits/stdc++.h>

using namespace std;

int fnc(string s)
{
    int i=1, j=-1;
    int a[1000];
    a[0] = -1;
    while(s[i])
    {
        while(j >= 0 && s[j+1] != s[i])
            j = a[j];
        if(s[j+1] == s[i])
            ++j;
        a[i] = j, ++i;

    }

    return j;
}
int main()
{
    int t;
    string s;
    scanf("%d", &t);
    while(t--)
    {
       cin>>s;
        int b = s.length(), c = fnc(s);

        if(b%(b-c-1) == 1)
            cout<<b<<endl;
        else
            cout<<b-c-1<<endl;
           cout<<endl;

    }
    return 0;
}

