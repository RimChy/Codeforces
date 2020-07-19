#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n+1],b[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    map<double,int>mp;
    int ans=0,mx=0;
    for(int i=0;i<n;i++){
        if(a[i]==0 && b[i]==0) ans++;
        else if(a[i]==0 && b[i]!=0) continue;
        else{
            mp[(-b[i])/a[i]]++;
        }
    }
    for (auto it=mp.begin();it!=mp.end();it++) mx=max(mx,it->second);
    cout<<mx+ans<<endl;
}
