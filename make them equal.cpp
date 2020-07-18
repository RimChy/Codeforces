#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    set<int>s;

    vector<int>v;
    for(int i=0;i<n;i++) {
            cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++) s.insert(a[i]);

    for(auto it=s.begin();it!=s.end();it++){
        v.push_back(*it);
    }
    if(s.size()>3) cout<<-1<<endl;
    else if(s.size()==3) {
        if(v[1]-v[0]==v[2]-v[1]) cout<<v[1]-v[0]<<endl;
        else cout<<-1<<endl;
    }
    else if(s.size()==2){
        if((v[1]-v[0])%2==0) cout<<(v[1]-v[0])/2<<endl;
        else cout<<v[1]-v[0]<<endl;
    }
    else cout<<0<<endl;



}
