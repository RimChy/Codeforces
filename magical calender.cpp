#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,r;
        cin>>n>>r;
        long long sum=0;
        if(r<n) cout<<(r*(r+1))/2<<endl;
        else if(r>=n) cout<<(((n-1)*(n))/2)+1<<endl;
    }
}
