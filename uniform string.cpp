#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s,s1;
        for(char i='a';i<='z';i++){
            s+=i;
        }
        for(int i=0;i<k;i++){
            s1+=s[i];
        }
        for(int i=k;i<n;i++){
            s1+=s[i%k];
        }
        cout<<s1<<endl;

    }
}
