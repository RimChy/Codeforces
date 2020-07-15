#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,x1,y1,x2,y2,a,b,c,d;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        int p=x-a+b;
        int q=y-c+d;
        if(p>=x1 && p<=x2 && x1!=x2 && q>=y1 && q<=y2 && y1!=y2){
            cout<<"YES\n";
        }
        else cout<<"NO"<<endl;
    }
}
