#include <stdio.h>

int main()
{
    int a,c;
    char b;
    scanf("%d%c",&a,&b);


    if(a >=1 && a<=2 )
    {
        if (b  == 'A' || b =='D')
        {
            printf("window\n");

        }
        else
        {
            printf("aisle\n");
        }
    }
    else if(a >= 3 && a <= 20 )
    {
        if ( b == 'A' || b == 'F')
        {
            printf("window\n");
        }
        else
        {
            printf("aisle\n");
        }
    }
    else if (a >= 21 && a <= 65)
    {
        if (b == 'A' || b == 'K')
        {
            printf("window\n");
        }
        else if ((b >= 'C' && b <= 'D') || (b >= 'G' && b<= 'H') )
        {
            printf("aisle\n");
        }
        else if(b != 'I')
        {
            printf("neither\n");
        }
    }


    return 0;
}
