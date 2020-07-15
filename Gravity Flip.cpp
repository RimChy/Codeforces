#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>v;
    int n,i,x;
    cin>>n;


    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
