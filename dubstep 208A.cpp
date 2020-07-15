#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str,s;
    int len,i;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
        }
        else {
        v.push_back(i+1);
        }
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i+1]-v[i]==1) str=str+s[v[i]-1];
        else {
            str+=s[v[i]-1];
            str+=" ";
        }
    }
     str+=s[v[v.size()-1]-1];
    cout<<str<<endl;
}
