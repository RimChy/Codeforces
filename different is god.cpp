#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    set<int>s1;
    for(int i=0;i<n;i++){
        s1.insert(s[i]);
    }
    if(26-s1.size()<n-s1.size()) cout<<-1<<endl;
    else
    cout<<n-s1.size()<<endl;

}
