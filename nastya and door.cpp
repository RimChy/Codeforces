#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1],node[n+1]={0},p=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]) {
               if(i<k-1) p++;
               node[i]=1;
            }

        }
      //  cout<<p<<endl;
        int ans=p,indx=1;
        for(int i=k;i<n;i++){
            if(node[i-k+1]==1) p--; //k er value ek ek kore baranor jnno left theke 1 kore kombe
            if(node[i-1]==1) p++;
            if(p>ans){
                ans=p;
                indx=i-k+1+1;
            }
           // cout<<ans<<" "<<indx<<endl;
        }
        cout<<ans+1<<" "<<indx<<endl;
    }
}
