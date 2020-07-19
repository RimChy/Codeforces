#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    long long int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    //sort(a,a+n);
    int k=0;
    long long sum=0,mx=0,mn=10000000;
    for(int i=0;i<n;i++){
            sum=a[i];
    mx=0,mn=10000000;
        for(int j=i+1;j<n;j++){
           sum=sum+a[j];
           mx=max(mx,a[j]);
           mn=min(mn,a[j]);
           cout<<sum<<" "<<i<<" "<<j<<endl;
          if(sum<=r && sum>=l && mx-mn>=x) k++;
        }


    }
    cout<<k<<endl;



}
