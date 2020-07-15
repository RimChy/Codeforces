
#include <stdio.h>

int main ()
{
    int s[100];
    int n,i = 0, a,b, j;
    int x=0,y;


    scanf("%d",&n);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &s[i]);

    }
    scanf("%d %d",&a,&b);
       for(i = a - 1; i < b -1; i++)
        {
            x += s[i];
        }


    printf("%d\n",x);
    return 0;
}
