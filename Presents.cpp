#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    for(int j=0;j<v.size();j++){
        for(int i=0;i<n;i++){
            if(a[i]==v[j]){
                cout<<i+1<<" ";
            }
        }
    }
    cout<<endl;
}
