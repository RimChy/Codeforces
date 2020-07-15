#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    int a[n+1];
    vector<int>v;
    vector<int>v1;

    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(a[i]);

    }
    sort(v.begin(),v.end());
    d=v[v.size()-1];
    cout<<d<<" ";

    for(int i=v.size()-1;i>=0;i--){
        if(d%v[i]!= 0){
            cout<<v[i];
            break;
        }
        else if(d%v[i]==0 && v[i]==v[i-1])  {
            cout<<v[i];
            break;
        }
    }
    cout<<endl;
}

