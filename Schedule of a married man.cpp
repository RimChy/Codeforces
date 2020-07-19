#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int t,h1,h2,h3,h4,flag;
    int m1,m2,m3,m4,a,b,c,d,h=1;
    cin>>t;
    while(t--)
    {
        cin>>h1>>s>>m1>>h2>>s>>m2;
        cin>>h3>>s>>m3>>h4>>s>>m4;
        a=h1*80+m1,b=h2*80+m2,c=h3*80+m3,d=h4*80+m4;
        cout<<"Case "<<h++<<": ";
        if(b<c || a >d) cout<<"Hits Meeting"<<endl;
        else cout<<"Mrs Meeting"<<endl;

        //if(flag==1) cout<<"Hits meeting"<<endl;




    }
}
