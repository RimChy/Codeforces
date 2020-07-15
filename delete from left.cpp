#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    int m=s.size()-1,n=s1.size()-1,p=0;
    while(1){
        if(s[m]==s1[n] && m>=0 && n>=0){
            p++;
            m--;
            n--;
           // cout<<m<<" "<<n;
        }


        else break;
    }

    cout<<s.size()+s1.size()-2*p<<endl;

}
