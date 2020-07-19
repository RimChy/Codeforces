#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

            set<char>st,sp;
        string s,s1;
        cin>>s>>s1;
        int p=0;
       // sort(s.begin(),s.end());
        //sort(s1.begin(),s1.end());
    for(int i=0;i<s.size();i++) {
        for(int j=0;j<s1.size();j++){
            if(s[i]==s1[j]){
                p++;
                break;
            }
        }
    }
    //if(st.size()!=sp.size()) cout<<"NO"<<endl;
    //else {

    if(p>=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

        }



}
