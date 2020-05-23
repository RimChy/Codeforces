#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>b>>x;
    string s;
    if(x%2==0){
            if(a>b){
            for(int i=0;i<x/2;i++)
                s+="01";
            for(int i=0;i<b-(x/2);i++) s+='1';
            for(int i=0;i<a-(x/2);i++) s+='0';
            cout<<s<<endl;
            }
            else{
                    for(int i=0;i<x/2;i++)
                s+="10";
            for(int i=0;i<a-(x/2);i++) s+='0';
            for(int i=0;i<b-(x/2);i++) s+='1';
            cout<<s<<endl;

            }

            }
            else {
                    if(a>b){
                for(int i=0;i<x/2;i++){
                    s+="01";
                }
                s+='0';
                for(int i=0;i<a-(x/2)-1;i++) s+='0';
                for(int i=0;i<b-(x/2);i++) s+='1';
                cout<<s<<endl;
                    }
                    else{
                        for(int i=0;i<x/2;i++)
                s+="10";
            for(int i=0;i<b-(x/2);i++) s+='1';
            for(int i=0;i<a-(x/2);i++) s+='0';
            cout<<s<<endl;
                    }
            }

    }

