#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,money,i,j,t;
   int coin[]={1,5,10},mat[100][100];
  while(~scanf("%d",&money)){

    for( i=0;i<3;i++){
        for(j=0;j<=money;j++){
            if(j==0) mat[i][j]=1;
            else if(j>=coin[i]) mat[i][j] =mat[i-1][j]+mat[i][j-coin[i]];
            else mat[i][j]=mat[i-1][j];
        }
    }
    cout<<mat[3][money]<<endl;
    }
}
