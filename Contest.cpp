#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int l= max((3*a)/10,a-(a/250 * c));
    int m=max((3*b)/10,b-(b/250 * d));
    if(l<m)cout<<"Vasya\n";
    else if(l> m)cout<<"Misha\n";
    else cout<<"Tie\n";
}
