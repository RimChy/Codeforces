#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>21 || n-10<=0) cout<<0<<endl;
    else{
        int x=n-10;
        if(x==10) cout<<15<<endl;
        //else if(x==1) cout<<8<<endl;
        //else if(x==0) cout<<0<<endl;
        else cout<<4<<endl;
    }
}
