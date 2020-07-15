#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n+1];
    vector<pair<long long int,int>>v;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        v.push_back(make_pair(a[i],i+1));
    }
    sort(v.begin(),v.end());
    sum=sum/(n/2);
    for(int i=0;i<(n/2);i++){
        cout<<v[i].second<<" "<<v[v.size()-1-i].second<<endl;
    }

}

