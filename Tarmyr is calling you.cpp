#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,l=0;
    cin>>a>>b>>c;
    for(int i=1; i<=c; i++)
    {
        for(int j=1; j<=c; j++)
        {
            int m=a*i;
            int n=b*j;
            if(m == n && m<=c && n<=c)
                l++;
        }
    }
    cout<<l<<endl;}
