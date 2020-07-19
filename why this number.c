#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long int a,b,c;
    scanf("%llu%llu",&a,&b);
    c = pow(10,9)+7;
    printf("%llu\n",(((a%c)*(b%c))%c+(9223372036854775808ULL%c))%c);
    return 0;
}
