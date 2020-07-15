#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,l;
    cin>>a>>b>>c>>d;
    n=min(a,min(c,d));
    l=min(a-n,b);
    cout<<256*n+32*l<<endl;
}
