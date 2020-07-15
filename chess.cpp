#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,s1;
     cin>>s>>s1;
     if(abs(s[0]-s1[0])==1) cout<<64-2-14-4<<endl;
     else if(abs(s[0]-s1[0]==2)) cout<<64-2-14-6<<endl;
     else cout<<64-14-2-10<<endl;
}
