#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   int a[10];
   memset(a,0,sizeof(a));
    for(int i=0;i<s.size();i++){
     a[s[i]-48]++;
    }
    int x=0,y=0;
    for(int i=9;i>=0;i--){
      if(a[i]>=x){
        x=a[i];
        y=i;
      }
    }
    cout<<y<<endl;



}
