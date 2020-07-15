#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='F' && s[i+1]=='S') x++;
        else if(s[i]=='S' && s[i+1]=='F') y++;

    }
    if(y>x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
