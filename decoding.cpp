#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int n;
    cin>>n;
    cin>>s;
   for(int i=0;i<n;i++){
    if((n-i)%2!=0)s1=s1+s[i];
  else s1=s[i]+s1;
   }
   cout<<s1<<endl;

}
