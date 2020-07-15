#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0,p=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='U') x++;
        else y++;
        if(x==y && s[i]==s[i+1]) p++;
        //cout<<x<<y<<endl;
    }
    cout<<p<<endl;
}
