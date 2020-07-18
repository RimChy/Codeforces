#include<bits/stdc++.h>
using namespace std;
int ncr(int n,int r)
{
    if(n==r) return 1;
    if(r==1) return n;
    return ncr(n-1,r)+ncr(n-1,r-1);
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r)<<endl;
}
