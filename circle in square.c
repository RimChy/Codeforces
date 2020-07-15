#include <stdio.h>
#include <math.h>
#define pi 2 * acos(0.0)
int main()
{

    int a, i;
    double A, r;
    scanf("%d", &a);
    for (i=1; i<=a; i++)
    {
        scanf("%lf", &r);
        A =(4 * r *r) - (pi * r * r);

        printf("Case %d: %.2lf\n", i, A);
    }



    return 0;
}
