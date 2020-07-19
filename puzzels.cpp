#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m+1];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    int x=a[n-1]-a[0];
    for(int i=1;i<=m-n;i++){
        if(a[i+n-1]-a[i]<x){
            x=a[i+n-1]-a[i];
        }
    }
    cout<<x<<endl;

}
