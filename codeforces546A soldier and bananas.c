#include <stdio.h>
int main()

{
    int k, n, w, i, m=0;


    scanf ("%d%d%d", &k, &n, &w);
    for(i = 1; i <= w; i++)
    {
        m += i*k;
    }
    if (m > n) {

        printf("%d\n", m-n);
    }
    else {
        printf("0");
    }




    return 0;

}

