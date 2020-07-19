#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    vector<int>v;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) v.push_back(i);
    }
    v.push_back(n);
    for(int i=0;i<v.size();i++){
        reverse(s.begin(),s.begin()+v[i]);
       // cout<<s<<endl;
    }
    cout<<s<<endl;
}
