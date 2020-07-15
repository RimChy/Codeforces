#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    long long int sum=0;
    for(int i=0;i<n;i++){

        if(a[i]<i+1) sum+=(i+1-a[i]);
        else sum+=(a[i]-i-1);
        //cout<<i<<endl;

    }
    cout<<sum<<endl;
}
