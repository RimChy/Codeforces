#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    bool tree[n+1]={0};
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int day=1,p=0,q=0;
    while(p<n){
         int maxx=0;
    for(int i=0;i<v.size();i++){
        if(tree[i]) continue;
        if(maxx==x) break;
        if(v[i].first==day || v[i].first==day-1){
            int sum=min(x-maxx,v[i].second);
            maxx+=sum;
            v[i].second-=sum;
        }
    if(v[i].first<day-1){
        tree[i]=true;
        p++;
    }
    }
    day+=1;
    q+=maxx;
    }
    cout<<q<<endl;


}
