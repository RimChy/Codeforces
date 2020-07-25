#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m ;
    cin >>m;
    vector<string>v;
    for(int i=1;i<m;i+=2) {
            string s="";
         for(int j=1;j<=(m-i)/2;j++) s+='*';
         for(int j=1;j<=i;j++) s+='D';
         for(int j=1;j<=(m-i)/2;j++) s+='*';
         cout<<s<<endl;
         v.push_back(s);

    }
    for(int i=1;i<=m;i++) cout<<"D";
    cout<<endl;
    for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<endl;
}
