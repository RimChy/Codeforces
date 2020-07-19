#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,x,y,z,a,b,c;
    cin>>n>>m;

     if(n%m==0){
        x=n/m;
        a=m*(x*(x-1))/2;
     }
     else{
        x=n/m;
        y=n%m;
        a=(y*(((x+1)*x)/2))+((m-y)*(x*(x-1)/2));

     }
     b=(((n-m+1)*(n-m))/2);
     cout<<a<<" "<<b<<endl;


}
