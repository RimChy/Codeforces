#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,s1;
        int p=0;
        cin>>s;int a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]) p++;
            if(s[i]=='0')a++;
            else b++;

        }
        if(s[s.size()-1]==s[s.size()-2]) p++;

       // cout<<a<<" "<<b<<endl;
        if(a==0 || b==0){
            cout<<s<<endl;
        }
        else {
                if(b>a){
            for(int i=0;i<s.size();i++){
                      cout<<10;
            }
                }
                else {
                    for(int i=0;i<s.size();i++){
                        cout<<0<<1;
                    }
                }
            cout<<endl;

        }
    }
}
