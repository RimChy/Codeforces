#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n,x,m;
       cin>>n>>x>>m;
       while(m--){
        int l,r;
        cin>>l>>r;
        if(x>=l && x<=r){
            x=r;
        }
       }
       cout<<x<<endl;
    }
}
