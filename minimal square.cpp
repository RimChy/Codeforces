#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x=max(a,b),y=min(a,b);
        if(y*2==x) cout<<x*x<<endl;
        else if(y*2<x) cout<<x*x<<endl;
        else cout<<y*y*4<<endl;


        }

}
