#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<abs(s[1]-t[1])<<endl;
    if(s[0]==t[0] and s[1] > t[1]){
        for(int i=0;i<s[1]-t[1];i++){
            cout<<"D"<<endl;
        }
    }
    if(s[0]==t[0] and s[1]< t[1]){
        for(int i=0;i<t[1]-s[1];i++){
            cout<<"U"<<endl;
        }
    }
    cout<<s[0]-t[0];
}
