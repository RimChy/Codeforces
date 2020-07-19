#include <stdio.h>
long int fibonacci(int count);
main( )
{
    int count, n;
    printf("How many Fibonacci numbers? ");
    scanf ( "%d", &n) ;
    printf("\n");
    for (count = 1; count <= n; ++count)
        printf("\ni = %2d F = %ld", count, fibonacci(count));
}
long int fibonacci(int count) /* calculate a Fibonacci number using the formulas F = 1 for i< 3, and F = F1 + F2 for i >= 3 */
{ static long int fl = 1, f2 = 1;
long int f;
f = (count < 3) ? 1 : fl + f2;
f2 = fl;
fl = f;
return(f);
}
