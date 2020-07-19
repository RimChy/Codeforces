#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
    long long x,y,a,b;
    cin>>x>>y>>a>>b;
    long long c=y-x,d=a+b;
    if(c%d==0) cout<<c/d<<endl;
    else cout<<-1<<endl;
    }
}
