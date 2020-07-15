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
        long long sum=0;
        for(int i=0;i<n;i++) cin>>a[i];
        int i=0;
        while(i<n){
               // cout<<i<<endl;
               int m=0,p=-1000000000;
            if(a[i]>0){
               while(a[i]>0 && i<n){
                m=max(m,a[i]);
                i++;
               }
               sum+=m;

              //cout<<m<<endl;
             // cout<<i<<endl;

            }
            else{
                while(a[i]<0 && i<n){
                    p=max(p,a[i]);
                    i++;
                }
                sum+=p;
             //  cout<<p<<endl;
              // cout<<i<<endl;
            }

        }

        cout<<sum<<endl;
    }
}
