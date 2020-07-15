#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,u,x,y,z,v,w;
    cin>>a>>b>>c;
    x=a+b*c;
    y=a*b*c;
    z=a*(b+c);
    u=(a+b)*c;
    v=a+b+c;
    d = max(x,y);
    e = max(z,u);
    f = max(d,e);
    w = max(f,v);
    cout<<w<<endl;


}
