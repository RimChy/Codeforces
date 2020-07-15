#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<int,string>mp;
    while(t--){
        string s;
        cin>>s;
        if(s=="add"){
            int n;
            string s1;
            cin>>n>>s1;
            mp[n]=s1;
        }
        else if(s=="del"){
            int n;
            cin>>n;
            mp[n]="";
        }
        else{
            int n;
            cin>>n;
            if(mp[n]=="") cout<<"not found"<<endl;
            else cout<<mp[n]<<endl;
        }
    }
}
