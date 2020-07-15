#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    long long int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    long long int b[n+1];
    for(int i=0;i<m;i++) cin>>b[i];
    int k=0;
    vector<long long int>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[j]%a[i]==0) v.push_back(b[j]/a[i]);
        }
    }
    sort(v.begin(),v.end());
    //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    int x=lower_bound(v.begin(),v.end(),v[v.size()-1])-v.begin();
    cout<<v.size()-x<<endl;

}
