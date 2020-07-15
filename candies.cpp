#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k=2;
    cin>>t;
    while(t--){
    cin>>n;
    long long int y=pow(2,k)-1;
    //cout<<y<<endl;
    while(n%y!=0){
        k++;
        y=pow(2,k)-1;
       // cout<<y<<endl;
    }
    printf("%lld\n",n/y);
    k=2;

    }
}
