#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,n,p=0,x;
        cin>>a>>b>>n;
        if(a<b) swap(a,b);
        while(a<=n){
            x=a;
            a+=b;
            b=x;
            if(a<b) swap(a,b);
            p++;
        }
        cout<<p<<endl;
    }
}
