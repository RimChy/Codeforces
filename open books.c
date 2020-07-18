#include<stdio.h>
int main()
{
     long long int i,t,n,a;
    scanf("%lld",&t);
    for(i = 0;i < t;i++){
        scanf("%lld",&a);
        if(a % 5 == 0){
            printf("%lld\n",a/5);
        }
        else{
            printf("%lld\n",(a/5)+1);
        }

    }
    return 0;

}
