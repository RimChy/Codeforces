#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,money,i,j;
    cin>>n>>money;
    int coin[n+1],mat[100][100];
    for(int i=1;i<=n;i++){
        cin>>coin[i];
    }
    for( i=1;i<=n;i++){
        for(j=0;j<=money;j++){
            if(j==0) mat[i][j]=1;
            else if(j>=coin[i]) mat[i][j] =mat[i-1][j]+mat[i][j-coin[i]];
            else mat[i][j]=mat[i-1][j];
        }
    }
    cout<<mat[n][money]<<endl;
}
