#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int m=0,p=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
               v.push_back(i+1);

            }
        }
        if(v.size()==0) cout<<0<<endl;
        else{
        for(int i=1;i<v.size();i++){
            m=max(m,v[i]-(v[i-1]+1));
        }
        if(v[v.size()-1]!=n) m=max(m,n-v[v.size()-1]);
        cout<<m<<endl;
        }

    }

}
