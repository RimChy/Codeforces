#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    long long ans=0;
   for(long long i=n;i>1;i-=2) ans+=(i/2)*(i/2)*8;
    cout<<ans<<endl;
    }

}
