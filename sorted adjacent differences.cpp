#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    int x=n/2;
        int a[n+1],b[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        cout<<a[x]<<" ";
        for(int i=1;i<=x;i++){
            if(x-i>=0) cout<<a[x-i]<<" ";
            if(x+i<n) cout<<a[x+i]<<" ";
        }
        cout<<endl;
    }

}
