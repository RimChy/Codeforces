#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    for(int i=1;i<=k;i++){
        for(int j=0;j<n;j++){
            if(s[j]=='B' && s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout<<s<<endl;
}
