#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a4,sum=0;
    string s;
    cin>>a1>>a2>>a3>>a4>>s;
    for(int i=0;i<s.size();i++){
       if(s[i]=='1') sum+=a1;
       if(s[i]=='2') sum+=a2;
       if(s[i]=='3') sum+=a3;
       if(s[i]=='4') sum+=a4;
    }
    cout<<sum<<endl;
}
