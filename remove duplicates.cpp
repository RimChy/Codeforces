#include<bits/stdc++.h>
#define maxn 10000
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],node[maxn]={0};
    vector<int>v;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-1;i>=0;i--){
        if(node[a[i]]!=1){
            node[a[i]]=1;
            v.push_back(a[i]);
        }
    }
    cout<<v.size()<<endl;
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
