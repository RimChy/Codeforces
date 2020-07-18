#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,y;
    cin>>w>>y;
    int d=7-max(w,y);
    if(d%2!=0 && d!=3) cout<<d<<"/6"<<endl;
    else if (d%2==0 && d!=6) cout<<d/2<<"/"<<6/2<<endl;
    else if(d==3) cout<<"1/2"<<endl;
    else cout<<"1/1"<<endl;
}
