#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int v1[n+1],v[n+1];
        v[0]=2;
        v1[0]=1;
        long long int x=n/2,sum=2,sum1=1;
       // cout<<x<<endl;
        if(x%2!=0) cout<<"NO"<<endl;
        else {
                cout<<"YES"<<endl;
            for(long long int i=1;i<x;++i){

                v[i]=v[i-1]+2;
                sum+=v[i];
            }
            for(long long int i=1;i<x-1;++i){
                v1[i]=v1[i-1]+2;
                sum1+=v1[i];


            }
            v1[x-1]=sum-sum1;

            for(long long int i=0;i<x;i++) cout<<v[i]<<" ";
            for(long long int i=0;i<x;i++) cout<<v1[i]<<" ";
            cout<<endl;
        }

    }

}
