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
    sort(a,a+n);
    int x=0,c=0;
    for(int i=0;i<n;i++){
        c=(upper_bound(a,a+n,a[i])-a)-(lower_bound(a,a+n,a[i])-a);
        x=max(x,c);
    }
    if(x>(n+1)/2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
