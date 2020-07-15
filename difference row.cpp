#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long sum=0;
    sort(a,a+n);
    swap(a[0],a[n-1]);
    for(int i=0;i<n;i++){
       // sum+=(a[i]-a[i+1]);
       cout<<a[i]<<" ";
    }
    cout<<endl;
}
