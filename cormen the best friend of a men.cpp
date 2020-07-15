#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    long long sum=0,x;
    for(int i=1;i<n;i++){
         x=a[i];
         if(a[i]+a[i-1]<k){
        a[i]=abs(k-a[i-1]);
         }
    sum+=abs(a[i]-x);
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
