#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d,e,f,x,y;
    cin>>n;
    vector<int>v;
    if(n<10){
        cout<<n<<endl;
    }
    if(n>=10 && n<100){
            d=9+(n-9)*2;
        cout<<d<<endl;
    }
    if(n>=100 && n<1000){
        e=d+(n-99)*3;
        cout<<e<<endl;
    }
    if(n>=1000 && n<10000){
        f=e+(n-999)*4;
        cout<<f<<endl;
    }
    if(n>=10000 && n<100000){
        x=f+(n-9999)*5;
        cout<<x<<endl;
    }
    if(n>=100000 && n<1000000){
        y=x+(n-99999)*6;
        cout<<y<<endl;
    }
    if(n>=1000000 && n<10000000){
        cout<<5888889+(n-999999)*7<<endl;
    }
    if(n>=10000000 && n<100000000){
        cout<<68888889+(n-9999999)*8<<endl;
    }
    if(n>=100000000 && n<1000000000){
        cout<<788888889+(n-99999999)*9<<endl;
    }
    if(n>=1000000000 && n<10000000000){
        cout<<8888888889+(n-999999999)*10<<endl;
    }

}

