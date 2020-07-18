#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,l=0,p=0,happyalex=0;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
    if(v[i].first < v[i+1].first && v[i].second > v[i+1].second){
        cout<<"Happy Alex\n";
        return 0;
    }
    }
    cout<<"Poor Alex\n";
}
