#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a[26];
    string s;
    cin>>s>>k;
    for(int i=0;i<26;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<s.size();i++){
        int k=(i+1)*(a[(s[i]-'a')]);
        sum+=k;
    }
    sort(a,a+26);
    for(int i=1;i<=k;i++){
        sum+=a[25]*(i+s.size());
    }
    cout<<sum<<endl;

}
