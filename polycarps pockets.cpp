#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int x=0;
    for(auto it:mp){
        if(it.second>x){
            x=it.second;
        }
    }
    cout<<x<<endl;
}
