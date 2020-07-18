#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n,m;
    cin>>n>>m;
    string arr[n+1][m+1];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==0 && i!=0) arr[i][j]='W';
            else arr[i][j]='B';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    }
}
