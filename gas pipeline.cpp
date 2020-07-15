#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        long long p,pi;
        cin>>n>>p>>pi;
        string s;
        cin>>s;
        int zero=0,one=0;
        for(int i=0;i<n;i++){
           if(s[i]=='0') zero++;
           else one++;
        }
        cout<<zero<<" "<<one<<endl;
        cout<<(one+2)*pi*2+(one+2)*p*2+(zero-1)*pi+(zero-1)*p<<endl;
    }
}
