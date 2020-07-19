#include <stdio.h>
int main()
{
   long int N,sum;
   int T,i;
    scanf("%d",&T);
    for(i=0; i < T; i++)
    {
        scanf("%ld",&N);
        sum = ((N + 1) * N) / 2;
        printf("%ld\n",sum);
    }







    return 0;


}

