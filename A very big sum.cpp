#include <stdio.h>
int main()
{
    int n,i;
    long long int a[10],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
           sum += a[i];

    }


    printf("%lld\n",sum);


}
