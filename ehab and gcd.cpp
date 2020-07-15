#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,x=0;
    cin>>t;
    while(t--){
        cin>>a;
        if(a%2==0 && a!=2){
            cout<<2<<" "<<a-2<<endl;
        }
        else if(a==2){
            cout<<1<<" "<<1<<endl;
        }
        else {
            cout<<1<<" "<<a-1<<endl;
        }
    }
}
