#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,str;
    int p=0;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
          if(s[i]=='0' && p==0) p++;
          else str+=s[i];
    }
    if(str.size()==s.size()-2) str+=s[s.size()-1];
    cout<<str<<endl;
}
