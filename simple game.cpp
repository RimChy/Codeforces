#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m;
    if(m-1<n-m) a=m+1;
    else a=m-1;
    if(n==1) cout<<1<<endl;
    else cout<<a<<endl;
}
