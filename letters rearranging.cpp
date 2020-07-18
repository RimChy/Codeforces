#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,s1,s2;
        cin>>s;
        s1=s;
        reverse(s.begin(),s.end());
        if(s1!=s) cout<<s1<<endl;
        else {
                s2=s1;
            sort(s1.begin(),s1.end());
        if(s2==s1) cout<<-1<<endl;
        else cout<<s1<<endl;

        }
    }
}
