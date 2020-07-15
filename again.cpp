#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size()-1;
    if(s[n]=='2'||s[n]=='0'||s[n]=='4'||s[n]=='6'||s[n]=='8'){
        cout<<0<<endl;
    }
    else cout<<1<<endl;
}
