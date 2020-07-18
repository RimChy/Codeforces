#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maxx,n,m,x;
    maxx=INT_MIN;
    cin>>n>>m;
    int a,b;
    while(n--){
        cin>>a>>b;
        if(b>m){
            x=a-(b-m);
        }
        else x=a;
        while(x>maxx){
            maxx=x;
        }
    }
    cout<<maxx<<endl;

}
