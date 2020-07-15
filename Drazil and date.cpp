#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s,r;
    cin>>a>>b>>s;
    r=(s-abs(a)-abs(b));
    if( r >=0 && r %2 == 0)cout<<"Yes\n";
    else cout<<"No\n";
}
