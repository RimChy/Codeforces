#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,x;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){

    cin>>a[i];
    if(a[i]<a[i-1] && i!=0){
        p++;
        x=i;
    }
    }
    if(p==0) cout<<0<<endl;
    else{
        if(p==1 && a[0]>=a[n-1]) cout<<n-x<<endl;
        else cout<<-1<<endl;
    }



}
