#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s==s1) printf("Yes\n");
    else printf("No\n");
}
