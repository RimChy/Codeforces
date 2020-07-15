#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p=0;
    cin>>n>>m;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(m<=n/2){
        for(int i=1;i<m;i++){
            if(a[m-1-i]==1 && a[m+i-1]==1)p+=2;
        }
        if(a[m-1]==1) p++;
        for(int i=2*m-1;i<n;i++){
            if(a[i]==1) p++;
        }
    }
    else{
        for(int i=0;i<(m-(n-m))-1;i++){
            if(a[i]==1) p++;
        }
        if(a[m-1]==1) p++;
        for(int i=1;i<=n-m;i++){
            if(a[m-1-i]==1 && a[m-1+i]==1) p+=2;
        }
    }
    cout<<p<<endl;


}
