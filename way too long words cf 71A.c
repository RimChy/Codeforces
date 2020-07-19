#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int n,i;
    scanf("%d\n",&n);

    for(i = 0; i < n; i++)
    {
        gets(s);
        if (strlen(s) > 10)
        {
            printf("%c%d%c\n",s[0],strlen(s) - 2,s[strlen(s) - 1]);
        }
         else
        {
            puts(s);
        }

    }

    return 0;
}

