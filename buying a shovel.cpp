#include<bits/stdc++.h>
#define maxx 1000000000
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
         int n,k;
        cin>>n>>k;
         int x;
         if(k>=n) cout<<1<<endl;

         else{
                 int ans=INT_MAX;
            for(int i=1;i*i<=n;i++){
                if(n%i==0){
                  if(n/i<=k) ans=min(ans,i);
         if(i<=k) ans=min(ans,n/i);
                }
                //cout<<ans<<endl;
            }
            cout<<ans<<endl;
         }

        }

}
