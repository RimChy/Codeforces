#include <stdio.h>
int main()
{
    int i, n, sum;
    scanf ("%d", &n);
    for (i = 1; i <=n; i++) {
    sum = sum + i;
    }
    printf ("sum is %d\n", sum);
    return 0;
}
