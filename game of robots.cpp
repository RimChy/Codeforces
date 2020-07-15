#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+2];
    long long b[n+2];
    b[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=b[i-1]+i;
    }
    for(int i=1;i<=n;i++){
        if(k==b[i]){
            cout<<a[b[i]-b[i-1]]<<endl;
            break;
        }
        else if(k<b[i]){
            cout<<a[k-b[i-1]]<<endl;
            break;
        }
    }
}
