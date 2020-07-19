#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,x;
    vector<int>v;
    //v.push_back(0);
    cin>>n>>k;
    string s;
    cin>>s;
    char c[k+1];
    for(int i=0;i<k;i++){
        cin>>c[i];
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    sum=(v[0]*(v[0]+1))/2;
    for(int i=1;i<v.size();i++){
        x=(v[i]-v[i-1]);
        sum+=(x*(x+1)/2);
    }
    int y=(n-1)-v[n-1];
    sum+=y*(y+1)/2;
    cout<<sum<<endl;
}
b jl
