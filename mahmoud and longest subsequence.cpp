#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    if(s!=s1) cout<<max(s.size(),s1.size())<<endl;
    else cout<<-1<<endl;
}
