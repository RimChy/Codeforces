#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long  v,c,m,n;
        cin>>v>>c>>m>>n;
        long long x=min(v,c);
        long long sum=v+c,sum1=m+n;;
        if(x<n || sum<sum1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }


}
