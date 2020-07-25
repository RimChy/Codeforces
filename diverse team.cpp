#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1];
    map<int,int>mp;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
       if(mp[a[i]]==0) mp[a[i]]=i;

    }
    if(s.size()<m) cout<<"NO"<<endl;
    else{
            cout<<"YES"<<endl;
            int p=0;
        for(auto it:mp){
            if(p==m) break;
            else cout<<it.second+1<<" ";
            p++;
        }
        cout<<endl;
    }
}
