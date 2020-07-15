#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,ans=0,i;
    cin>>n;
    while(n--){
        cin>>s;
        if(s == "Tetrahedron") ans+=4;
        if(s == "Cube") ans+=6;
        if(s == "Octahedron") ans+=8;
        if(s == "Dodecahedron") ans+=12;
        if(s == "Icosahedron") ans+=20;
    }
    cout<<ans<<endl;
}
