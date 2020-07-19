#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a,b;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
    }
    int p=0;
    for(int i=0;i<v.size();i++){
        if(v[i].first==1 || v[i].second==1) p++;
    }
    cout<<p<<endl;
}
