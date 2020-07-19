#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n;
    cin>>t;
    while(t--){
    cin>>a>>b>>n;
    n=n%3;
    if(n==0) cout<<a<<endl;
    if(n==1) cout<<b<<endl;
    else if(n==2)cout<<(a^b)<<endl;
    }
}
