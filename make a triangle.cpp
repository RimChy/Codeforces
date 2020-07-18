#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=min(a,min(b,c));
    int y=max(a,max(b,c));
    int z=(a+b+c)-x-y;
    //cout<<x<<y<<z;
    if(x+z>y) cout<<0<<endl;
    else cout<<y-(x+z)+1<<endl;
}
