#include<bits/stdc++.h>
using namespace std;
int main()
{
       int t;
       cin>>t;
       while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+1],b[m+2];
        map<int,int>mp;
        for(int i=0;i<n;i++) {
                cin>>a[i];
        mp[a[i]]=1;
        }
        int flag=0,x;
        for(int i=0;i<m;i++) {
                cin>>b[i];
        if(mp[b[i]]==1 && flag==0) {
            flag=1;
            x=b[i];
        }
       }
       if(flag==0) cout<<"NO"<<endl;
       else{
        cout<<"YES"<<endl<<1<<" "<<x<<endl;
       }



       }
}
