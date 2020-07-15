#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,cnt=0,x=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
            cnt=0;

        }
        else
        {
            cnt++;;
            x=max(x,cnt);
        }
    }
    cout<<x+1<<endl;
}
