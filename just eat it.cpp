#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    int a[n+1];
    vector<int>v;
    long long sum=0,sum1=0,ans=0,sum2=0;
    for(int i=0;i<n;i++) {
            cin>>a[i];
    sum+=a[i];
    }
    for(int i = 0; i<n-1 ; i++){
        sum1 += a[i];
        ans = max(ans , sum1);
        //cout<<sum1<<" "<<ans<<endl;
    }

    for(int i = n-1; i>0 ; i--){
        sum2 += a[i];
        ans = max(ans , sum2);
        //cout<<sum2<<" "<<ans<<endl;
    }

    if(sum>ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }



}
