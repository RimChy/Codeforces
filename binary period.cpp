#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--){
        string t,s;
        cin>>t;
        int n=t.size();
        if(t[0]==t[1]) count=1;
        int zero=0,one=0;
        if(t[0]=='0'){
                zero=1;
        }
        else {one=1;}
        for(int i=1;i<n;i++){
            if(t[i-1]==t[i]) count++;
            if(t[i]=='1') one++;
            if(t[i]=='0') zero++;
        }
        //cout<<zero<<one<<endl;
        if(count==n){
            cout<<t<<endl;
        }
        else {
        if(one>zero){
            for(int i=0;i<one;i++){
                s+='1';
                s+='0';
            }
        }
        else if(one<zero){
            for(int i=0;i<zero;i++){
                s+='0';
                s+='1';
            }
        }
        else{
            for(int i=0;i<n;i++){
                s+='0';
                s+='1';
            }
        }

        cout<<s<<endl;
    }
    }
}
