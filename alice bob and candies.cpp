#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    long long sum=0,sum1=0,suma=0,sumb=0,sumc=0,sumd=0,l=1,r=n,p=1,ans=0;
    while(l<=r){

        if(p%2==0){
                sum1=0,sum=sumc;
            while(sum1<=sum && r>=l){
                sum1+=a[r];
                sumb+=a[r];
                r--;
            }
            sumd=sum1;
        }
        else{
            if(l==1){
                sum=a[l];
                suma+=sum;
                l++;
            }
            else{
                    sum=0,sum1=sumd;
            while(sum<=sum1 && l<=r){
                sum+=a[l];
                suma+=a[l];
                l++;
            }

            }
            sumc=sum;
        }
        p++;
        ans++;
       // cout<<sum<<" "<<sum1<<" "<<p<<" "<<ans<<" "<<l<<" "<<r<<endl;
    }
    cout<<ans<<" "<<suma<<" "<<sumb<<endl;
    }







}
