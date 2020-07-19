#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            string s;
            cin>>s;
            long long res = 0,init=0,p=0,m=0;
    for(long long i=0;i<s.size();i++){
        if(s[i]=='+') p++;
        else m++;
    }
    if(m==0) cout<<p<<endl;
    else if(p==0) cout<<((m*(m+1))/2)+m<<endl;
    else{
     if(p>=m) cout<<s.size()<<endl;
     else{
            long long sum=0;
    for(long long i=0;i<s.size();i++){
        if(s[i]=='-') sum+=(i+1);
    }
    cout<<sum<<endl;
     }
     }
    }
    }


