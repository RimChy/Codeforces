#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,l=0;
    cin>>n;
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( i != j && v[i].first==v[j].second){
                ++l;
            }
        }
    }
    cout<<l;
}
