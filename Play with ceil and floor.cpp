#include<bits/stdc++.h>
#define maxx 100000000;
using namespace std;
int main()
{
     long long  int x,k,a,b,n,t,p,q,i;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        a=floor((x*1.0)/k);
        b=ceil((x*1.0)/k);
       // cout<<a<<b;


    for(i=1;i<=x;i++){
        if((x-i*a)%b==0){
            p=i;
            q=(x-p*a)/b;
            break;
        }
    }



    cout<<p<<" "<<q<<endl;
    }


}

