#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    cin>>n>>k;
    int a[n+1],b[n+1];
    long long sum=0,x=10000000000;
    a[0]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    b[0]=0;
    for(int i=1;i<=n;i++){
        b[i]=a[i]+b[i-1];
    }
    for(int i=1;i<=n-k+1;i++){
        sum=b[i+k-1]-b[i-1];
        if(sum<x){
            x=sum;
            m=i;
        }
    }

    cout<<m<<endl;
}
