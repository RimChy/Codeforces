#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,m,x;
    string s;
    cin>>s>>x;
    int a[s.size()+1];
   // if(s[0]=='.') a[0]=1;
     a[0]=0;
    //cout<<a[0]<<" ";
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) p++;
        a[i]=p;
       // cout<<a[i]<<" ";
    }
    while(x--){
        cin>>n>>m;
        cout<<a[m-1]-a[n-1]<<endl;
    }
}
