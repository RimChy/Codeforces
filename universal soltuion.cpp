#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1;
        int x=0,y=0,z=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='R') x++;
            else if(s[i]=='P') y++;
            else z++;
        }
        if(x>=y && x>=z){
            for(int i=0;i<s.size();i++) s1+='P';
        }
        else if(y>=x && y>=z) {
             for(int i=0;i<s.size();i++) s1+='S';
        }
        else if(z>=x && z>=y){
             for(int i=0;i<s.size();i++) s1+='R';
        }
        cout<<s1<<endl;


    }
}
