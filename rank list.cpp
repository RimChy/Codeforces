#include<bits/stdc++.h>
using namespace std;
struct team{
 int p;
 int t;};
 int comp(team a,team b){
     if(a.p==b.p) return a.t<b.t;
     return a.p>b.p;
 }
int main()
{
    int n,k,a,b;
    cin>>n>>k;
    team v[n+1];
    //vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        cin>>v[i].p>>v[i].t;
    }
    sort(v,v+n,comp);
   // reverse(v.begin(),v.end());
    int p=1,l=k-2,r=k;
    while(l>=0 && v[k-1].p==v[l].p && v[k-1].t==v[l].t) {
            l--;
    p++;
    }
    while(r<n && v[k-1].p==v[r].p && v[k-1].t==v[r].t) {
            r++;
    p++;
    }
    /*for(int i=0;i<n;i++){
           // cout<<v[i].p<<" "<<v[i].t<<endl;
        if(v[k-1].p==v[i].p && v[k-1].t==v[i].t) {p++;
      // cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }*/
   // int x=(lower_bound(v.begin(),v.end(),v[k-1])-v.begin());
    cout<<p<<endl;
}
