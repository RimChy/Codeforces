#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=n-1;i>=0;i--){
      sum+=(v[i].first*(n-i-1)+1);
    }
    cout<<sum<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<v[i].second<<" ";
    }
    cout<<endl;
}
