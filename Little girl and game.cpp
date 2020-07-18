#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,p=0;
    cin>>s;
    n=s.size();
    string s1=s;
     reverse(s.begin(),s.end());
     //cout<<s1<<endl<<s<<endl;
     for(int i=0;i<n;i++){
        if(s[i]!=s1[i]) p++;
     }
    if((p-1)%2==0 || p==0) cout<<"First"<<endl;
     else cout<<"Second"<<endl;
}
