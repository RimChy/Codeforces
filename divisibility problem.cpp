#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--){
            int x=0,y=0;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else {
            x=(a/b)+1;
            y=x*b-a;
            cout<<y<<endl;

        }
    }
}
