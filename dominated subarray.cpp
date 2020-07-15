#include<bits/stdc++.h>
#define mx 200005
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=0;
        int a[n+1];
        int node[mx];
        //vector<pair<int,int>>v;
        memset(node,0,sizeof(node));

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int x,ans=1000000,flag=1;
       // sort(v.begin(),v.end());
        for(int i=1;i<=n;i++){
            if(node[a[i]]!=0){
                ans=min(ans,abs(i-node[a[i]]));
            }
            //cout<<ans<<endl;
            node[a[i]]=i;

        }
        if(ans==1000000 || ans+1<2) cout<<-1<<endl;
        else {
        cout<<ans+1<<endl;
        }
    }
}
