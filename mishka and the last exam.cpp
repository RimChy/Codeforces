#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n/2+1];
    for(int i=0;i<n/2;i++) cin>>a[i];
    long long b[n+1];
    b[0]=0,b[n-1]=a[0];
    for(int i=1;i<n/2;i++){
        if(a[i]<=b[n-i]){
            b[i]=b[i-1];
            b[n-i-1]=a[i]-b[i];
        }
        else{
            if(a[i]-b[n-i]<=b[i-1]){
                b[i]=b[i-1];
                b[n-i-1]=a[i]-b[i];
            }
            else{
                b[n-i-1]=b[n-i];
                b[i]=a[i]-b[n-i-1];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
