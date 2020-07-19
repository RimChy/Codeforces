#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        long long x,sum=0,y;
        x=(s/c);
        y=(x/a);
        sum=x+(y*b);
        cout<<sum<<endl;
    }
}
