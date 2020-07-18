#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
       // m=max(m,a[i]);
    }
    m=a[n-1];
    //cout<<0<<" ";
    for(int i=n-2;i>=0;i--){
        //cout<<max(0,m+1-a[i])<<" ";
        if(a[i]>m){ m=a[i];
        a[i]=0;
        //cout<<a[i]<<" ";
        }
        else if(a[i]<m){
                a[i]=m+1-a[i];
           // cout<<m+1-a[i]<<" ";
        }
        else a[i]=1;
       // cout<<m<<endl;

    }
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<0<<endl;

}
