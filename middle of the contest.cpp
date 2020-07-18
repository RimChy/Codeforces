#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s,d;
    int h1,m1,h2,m2;
    cin>>h1>>s;

    cin>>m1>>h2>>s;

    cin>>m2;
    int x=((h1*60)+m1)+((h2*60)+m2);
    int y=x/2;
    int z=y/60,p=y%60;
    if(z>=0 && z<=9) cout<<"0";
    cout<<int(y/60)<<":";
    if(p>=0 && p<=9) cout<<"0";

     cout<<p<<endl;

}
