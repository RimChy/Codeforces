#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size(),p=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a') p++;
    }
    if(p>n/2) cout<<n<<endl;
    else cout<<p*2-1<<endl;
}
