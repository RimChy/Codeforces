#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum==0) cout<<0<<endl;
    else {
        if(abs(sum)%x==0) cout<<abs(sum)/x<<endl;
        else cout<<(abs(sum)/x)+1<<endl;
    }
}
