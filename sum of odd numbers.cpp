#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t;
    cin>>t;
    while(t--){
       int x=sqrt(n);
        if(m<=x){
            if(n%2!=0 && m%2!=0){
                cout<<"YES"<<endl;
            }
            else if(n%2==0 && m%2==0 && m!=1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;

}
