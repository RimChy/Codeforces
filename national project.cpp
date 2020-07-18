#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double n;
        long long int x,y,m,p;
        cin>>n>>x>>y;
        m=ceil(n/2);
        if(x>=m){
            cout<<n<<endl;
        }
        else
        { long long sum=0;
            if(m%x!=0){
                p=(m/x)+1;
                //sum=p*x+y*(p-1);
            }
            else {
                p=m/x;
                //cout<<p*x+y*(p-1)<<endl;
            }
           // cout<<p<<endl;
            sum=x*p+y*(p-1);
            cout<<sum<<endl;
        }

    }
}
