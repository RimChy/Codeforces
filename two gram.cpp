#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    map<string ,int>mp;
    for(int i=0;i<s.size()-1;i++){
        string s1;
        s1=s[i];
        s1+=s[i+1];
        mp[s1]++;
    }
    int x=0;
    string s2;
    for(auto it=mp.begin();it!=mp.end();it++) {
            //cout<<it->first<<" "<<it->second;
            if(it->second>x){
       x=it->second;
       s2=it->first;
            }
    }
    cout<<s2<<endl;

}
