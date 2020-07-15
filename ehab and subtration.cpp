#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long sum=0;
    set<long long>s;
    vector<long long>v;
    long long int a[n+1],b[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
     for(auto it=s.begin();it!=s.end();it++) v.push_back(*it);
     sort(v.begin(),v.end());
     b[0]=v[0];
     sum=v[0];
     for(int i=1;i<v.size();i++){
            b[i]=v[i]-(sum);
            sum+=b[i];
        }
     if(k<=v.size()){
        for(int i=0;i<k;i++) cout<<b[i]<<endl;
     }
     else {
        for(int i=0;i<v.size();i++) cout<<b[i]<<endl;
        for(int i=0;i<k-v.size();i++) cout<<0<<endl;
     }

}
