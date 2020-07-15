#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n>>x;
    long long sum=x,p=0;
    for(int i=0;i<n;i++){
        char c;
        long long d;
        cin>>c>>d;
        if(c=='+') sum+=d;
        else{
            if(sum<d) p++;
            else sum-=d;
        }
    }
    cout<<sum<<" "<<p<<endl;
}
