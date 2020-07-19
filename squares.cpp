#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    if(k>n) cout<<-1<<endl;
    else {
        sort(a,a+n);
        int sum=0;
       cout<<a[n-k]<<" "<<a[n-k]<<endl;
    }
}
