#include <stdio.h>
int main()
{
    int n,i,k,j,a[100],l=0;
    scanf("%d%d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0; i<n; i++)
    { for(j=i;j<n;j++){
          if(a[i] + a[j] == k){
            l++;
           }
        }
    }
    printf("%d\n",l);
    return 0;
}
