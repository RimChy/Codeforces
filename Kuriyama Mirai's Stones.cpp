#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n+1],b[n+1];
    long long int c[n+1],d[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    c[0]=a[0],d[0]=b[0];
    for(int i=1;i<n;i++){
        c[i]=a[i]+c[i-1];
        d[i]=b[i]+d[i-1];

    }

    int t,type,l,r;
    cin>>t;
    while(t--){
        cin>>type>>l>>r;
        if(type==1){
        cout<<c[r-1]-c[l-1]+a[l-1]<<endl;
        }
        else {
            cout<<d[r-1]-d[l-1]+b[l-1]<<endl;
        }
    }
}
