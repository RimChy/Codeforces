#include <stdio.h>
int main()
{
   long int T;
   int N,i,sum;
    scanf("%ld",&T);
    for(i=0; i < T; i++)
    {
        scanf("%d",&N);
        sum = ((N + 1) * N) / 2;
        printf("%d\n",sum);
    }







    return 0;


}

