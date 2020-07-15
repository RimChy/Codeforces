#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string t,s,s1,s2,s3,s4;
    cin>>t;
    int flag=1,flag1=1;
    for(int i=0;i<t.size();i++){
        if(t[i]!='a') s+=t[i];
    }
    //cout<<s<<endl;
    if(s.size()==0){
        cout<<t<<endl;
        return 0;

    }
    if(s.size()%2!=0){
        cout<<":("<<endl;
        return 0;
    }
    for(int i=0;i<s.size()/2;i++){
        s1+=s[i];
        }

    for(int i=s.size()/2;i<s.size();i++){
        s2+=s[i];
    }
    int a=0;
    for(int i=t.size()-1;;i--){
        s3+=t[i];
        a++;
        if(a==s.size()/2) break;

    }
    reverse(s3.begin(),s3.end());
    if(s1==s2 && s2==s3) {
          for(int i=0;i<t.size()-s1.size();i++) cout<<t[i];
          cout<<endl;
    }
    else cout<<":("<<endl;
}
