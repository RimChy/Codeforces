#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    if(a<x) cout<<"NO"<<endl;
    else{
        a=a-x;
        if(b+a<y) cout<<"NO"<<endl;
        else {
            c=c+b+a-y;
            if(c<z) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
