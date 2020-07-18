#include<bits/stdc++.h>
using namespace std;
long long int countt(long long int n){
    long long  x,x1,x2;
    if(n==0)return 1;
    if(n<10)return n;
     x1= countt(n/10);
     x2= countt(n/10 -1);

    x=max(n%10 * countt(n/10) , 9 *countt(n/10 -1) );
    return x;
}
int main()
{
    long long int n,x,y,z,mul=1;

    cin>>n;
    cout<<countt(n)<<endl;


    }






