#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0;
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size()) {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u'){
               continue;

            }
            else{
                p=1;
                break;
            }


        }
        else{

           if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u') {
               p=1;
                break;
           }
           else continue;
           }
    }
    if(p==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
