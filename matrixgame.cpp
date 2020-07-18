#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int mat[n+1][m+1],p=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
       for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(mat[i][j]==0 && mat[i-1][j]==0 && mat[i+1][j]==0 && mat[i][j-1]==0 && mat[i][j+1]==0){
                    mat[i][j]=1;
                    p++;
                }

            }


        }


        if(p%2==0) cout<<"Vivek"<<endl;
        else cout<<"Ashish"<<endl;

    }
}
