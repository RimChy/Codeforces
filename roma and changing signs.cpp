#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,y;
    cin>>n>>k;
    int a[n+1],x=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0) x++;
      //  sum+=a[i];
    }
    //cout<<sum<<endl;
    sort(a,a+n);
    //cout<<x<<endl;
    if(x>=k){
        for(int i=0;i<n;i++){
                if(i<k){
           sum+=(a[i]*(-1));
                }
                else sum+=a[i];
           //cout<<sum<<endl;
        }
    }
    else {
        for(int i=0;i<n;i++){
                if(i<x){
                    sum+=(a[i]*(-1));
                }
                else sum+=a[i];


        }
         k=k-x;
         //cout<<sum<<endl;
        if(k%2==1){
                if(x==0)
                    sum=sum-(a[x]+a[x]);
           else{
           y= min(abs(a[x-1]),abs(a[x]));
           if(y==a[x]) sum=sum-(a[x]+a[x]);

           else sum+=(a[x-1]+a[x-1]);
           }
        }


    }
    cout<<sum<<endl;

}
