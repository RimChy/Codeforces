#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        long long int n,x,y,m,p;
        cin>>n>>x>>y;
        if(n%2==0) m=n/2;
        else m=(n/2)+1;
         long long sum=0;
            if(m%x!=0){
                p=(m/x)+1;
                //sum=p*x+y*(p-1);
            }
            else {
                p=m/x;
                //cout<<p*x+y*(p-1)<<endl;
            }
           // cout<<p<<endl;
            sum=m+(p-1)*y;
            cout<<max(sum,n)<<endl;


    }
}
