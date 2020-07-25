#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        vector<int>v;
        int p=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=s1[i]){
                if(s[i]==s[0]){
                    p++;
                    v.push_back(i+1);
                }
                else
            }
        }
    }
}
