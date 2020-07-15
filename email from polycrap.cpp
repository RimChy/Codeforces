#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    string a,b,s;
    for(int i=0;i<n;i++){
            string s;
         cin>>a>>b;
         int l=0;
         set<char>st,sr;
         for(int i=0;i<b.size();i++){
            if(a[l]==b[i]) {
                    s+=b[i];
            l++;}
            if(i<a.size()) st.insert(a[i]);
            sr.insert(b[i]);
         }
         if(a==s && st.size()==sr.size()) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;


    }
}
