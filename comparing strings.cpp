#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int a,b,p=0;
    vector<int>v;
    if(s1.size()!=s2.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            p++;
            v.push_back(i);
        }
    }
    //cout<<p<<endl;
    if(p>2 || p<2 ){
        cout<<"NO"<<endl;

    }
    else {
        if(s1[v[1]]==s2[v[0]] && s1[v[0]]==s2[v[1]]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
