#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,l=0,p=0;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i] == '0' ){
            l++;
        }
        else{
            p++;
        }
    }
    cout<<abs(l-p)<<endl;
}
