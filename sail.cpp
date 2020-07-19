#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sx,sy,ex,ey,ans=-1;;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        if(s[i]=='N'){
                if(sy<ey)
            sy=sy+1;
        }
        if(s[i]=='S'){
            if(sy>ey)
            sy=sy-1;
        }
        if(s[i]=='E'){
            if(sx<ex)
            sx=sx+1;
        }
        if(s[i]=='W'){
            if(sx>ex)
            sx=sx-1;
        }
        if(sx==ex && sy==ey){
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;
}
