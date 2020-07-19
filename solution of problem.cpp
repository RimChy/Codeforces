#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, p, q, i;
    scanf ("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf ("%d %d",&p,&q);
     if (p+3 <= q)
    {
        printf("Yess!! We can take it!\n");
    }

    else
    {
        printf("Oh No!! It's taken!\n");
    }
    }
}
