#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
            int x,y,sum=0;
        cin>>n>>k;

        if(n%k==0 ){

          sum=n;
        }

       else if(n<k){
        if(n>k/2){
           sum=k/2;
        }
        else sum=n;
       }
        else {
                x=n%k;
                n=n-x;
                if(x<=k/2){
                    sum=n+x;
                }
                else{
                    x=k/2;
                    sum=n+x;
                }
        }
        cout<<sum<<endl;
    }
}
