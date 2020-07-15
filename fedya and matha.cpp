#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    if(n.size()==1)cout<<n[0]-'0';
    else {
        //int t=1,p=n[n.length()-1]-'0';
        long long s=(n[n.size()-2]-'0')*10+n[n.size()-1]-'0',m=1;
       // for(int i=0;i<n.length();i++)s+=n[i]-'0';
        m+=((n%2)?4:6);
        if(n%4==1)m+=5;
    else if(n%4==2)m+=13;
    else if(n%4==3)m+=15;
    else m+=1+6;
    cout<<m%5;
    }
}


