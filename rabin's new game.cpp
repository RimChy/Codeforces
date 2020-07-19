#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long a[n+1];
       for(long long int i=0;i<n;i++) cin>>a[i];
    long long sum=0;
    for(long long int i=0;i<n;i++){
        sum+=((a[i]*(a[i]-1))/2)%1000000007;
    }
    cout<<sum%1000000007<<endl;
    }
}
