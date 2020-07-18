#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s>>s1>>s2;
    map<char,char>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]=s1[i];
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]>='A' && s2[i]<='Z'){
            s2[i]=mp[s2[i]-'A'+'a']-'a'+'A';
        }
        else if(s2[i]>='a' && s2[i]<='z'){
            s2[i]=mp[s2[i]];
        }
    }
    cout<<s2<<endl;
}
