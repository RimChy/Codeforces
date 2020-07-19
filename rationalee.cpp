#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long int a[n+1],b[k+1],sum=0,mins=0;
        for(int i=0;i<n;i++) {
           cin>>a[i];
           if(a[i]<0) mins++;
        }

        for(int i=0;i<k;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+k);
        if(mins==0){
            for(int i=0;i<n-k;i++)
            if(b[i]==1){
                sum+=(a[n-i-1]*2);
            }
            else {
                sum+=(a[n-i-1]+a[n-1-i])
            }
        }

    }
}
