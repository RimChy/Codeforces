#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int mat[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
        sum+= mat[i][i];
    }
    printf("%d\n",sum);
}
