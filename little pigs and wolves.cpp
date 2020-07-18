#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n+1][m+1];
    int ans=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        cin>>a[i][j];
       }
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(a[i][j]=='W'){
            if(a[i][j-1]=='P'||a[i-1][j]=='P' || a[i+1][j]=='P'||a[i][j+1]=='P') ans++;
           }
       }}
       cout<<ans<<endl;

}
