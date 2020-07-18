#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n+1],s1[m+1];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<m;i++){
        cin>>s1[i];
    }
    int t,year;
    cin>>t;
    while(t--){
        cin>>year;
        string p,q;
        if(year%m==0) q=s1[m-1];
        else q=s1[(year%m)-1];
        if(year%n==0) p=s[n-1];
        else p=s[(year%n)-1];


        cout<<p<<q<<endl;

    }
}
