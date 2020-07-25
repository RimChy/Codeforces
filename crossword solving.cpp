#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s,s1;
    cin>>s>>s1;
    vector<pair<int,int>>v;
   int minn=INT_MAX,c,x,pos;
   for(int i=0;i<t-n+1;i++){
    c=0;
    for(int j=0;j<n;j++){
            //to check how many char are matched
        if(s1[i+j]!=s[j]) c++;
    }
    if(c<minn){
        minn=c;
        pos=i;
    }
   }
   cout<<minn<<endl;
   for(int i=0;i<n;i++){
    if(s1[i+pos]!=s[i]) cout<<i+1<<" ";
   }
   cout<<endl;

}
