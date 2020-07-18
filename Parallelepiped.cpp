#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=sqrt((c*a)/b),y=sqrt((b*a)/c),z=sqrt((c*b)/a);
    cout<<4*(x+y+z)<<endl;
}
