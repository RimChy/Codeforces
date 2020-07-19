#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c[n+1][n+1];
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
                cin>>c[i][j];
           }
        }
       int flag=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
              // cout<<a[i][j];
              if(c[i][j]=='1' && c[i+1][j]=='0' && c[i][j+1]=='0'){
                flag=1;
                break;
              }
                }
                //cout<<endl;
               }

        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
