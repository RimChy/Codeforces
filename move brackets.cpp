#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            stack<char>stac;
        int n;
        string s;
        cin>>n>>s;
    int i=0;
        while(i<s.size()){

            if(s[i]=='(') {
                stac.push(s[i]);
               }
               else if(s[i]==')' && !stac.empty()){
                stac.pop();
               }

            i++;
        }
        if(stac.size()>0) cout<<stac.size()<<endl;
        else cout<<0<<endl;


    }
}
