#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,x,y;
    cin>>n>>x>>y;
    double m=ceil((y*n)/100);
    //cout<<m<<endl;
    if(m>x){
        cout<<m-x<<endl;
    }
    else cout<<0<<endl;

}
