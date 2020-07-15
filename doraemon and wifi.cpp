#include<bits/stdc++.h>

using namespace std;

int x,y,z, cnt;

void solve(int n,int m)
{
    if(m==0)
    {
        if(n==x)
            cnt++;

        return;
    }

    solve(n+1,m-1);
    solve(n-1,m-1);
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    string s,s1;

    cin>>s;

    x=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='+')
            x++;
        else
            x--;
    }

    cin>>s;
    y=0;z=0;
    for(i=0;i<s.length();i++)
    {
         if(s[i]=='+')
            y++;
        else if(s[i]=='-')
            y--;
        else
            z++;
    }

    solve(y,z);
    float ans=(1.0/pow(2,z))*cnt;

    printf("%.15f",ans);

    return 0;
}
