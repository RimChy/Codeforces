#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t;
    cin>>t;
    while(t--){
    cin>>n>>k;
    long long int x=0,y;
    if(n%2==0){
        x=n+(k*2);
    }
    else {
        for(int i=3;i<=n;i+=2){
            if(n%i==0){
                y=i;
                break;
            }
        }
        //cout<<y<<endl;
        x=n+y+(2*(k-1));


    }
    cout<<x<<endl;
    }

}
