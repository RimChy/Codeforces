#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s,s1;
    while(t--)
    {
        cin>>s;
        int n=s.size();
        for(int i=0; i<s.size(); i++)
        {
            if(s[n-2]=='p' && s[n-1]=='o')
            {
                s1="FILIPINO";
            }
            else if((s[n-4]=='d' && s[n-3]=='e' && s[n-2]=='s' && s[n-1]=='u') || (s[n-4]=='m' && s[n-3]=='a' && s[n-2]=='s' && s[n-1]=='u'))
                s1="JAPANESE";
            else
                s1="KOREAN";
        }
        cout<<s1<<endl;
    }
}
