#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,x=0,p=0;
    cin>>t;

    while(t--){
        cin>>n>>k;
        int a[n+1],b[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i]+k;

    }
    sort(b,b+n);
    x=b[0];
    for(int i=0;i<n;i++){
        if(abs(a[i]-x)>k){

            p++;
        }

    }
    if(p>0){
        cout<<-1<<endl;

    }
    else{
    cout<<x<<endl;
    }
    p=0;
    }

}









