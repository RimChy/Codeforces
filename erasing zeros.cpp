#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0,p=0,q=0,x=0;
        while(i<s.size()){
            if(s[i]=='1' && p==0) p++;
            if(s[i]=='0' && p==1) q++;
            i++;
        }
        for(int j=s.size()-1;j>=0;j--){
            if(s[j]=='1') break;
            else x++;
        }
        if(p==1) cout<<q-x<<endl;
        else cout<<0<<endl;
    }
}
