#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s,s1,s2,s3,s4;
    cin>>s>>s1>>s2;
    s3=s+s1;
    sort(s3.begin(),s3.end());
    sort(s2.begin(),s2.end());
    if(s2 == s3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
