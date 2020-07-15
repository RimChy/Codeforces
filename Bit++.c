#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int n,i,sum = 0,j = 0;
    scanf("%d",&n);
    for (i = 0; i <= n; i++)
    {
        gets(s);

        if((s[0] == '+'  && s[1] == '+') || (s[1] == '+' && s[2] == '+'))
        {
            j++;
        }

        if((s[0] == '-' && s[1] == '-') || (s[1] == '-' && s[1] == '-'))
        {
            j--;
        }

    }


    printf("%d\n",j);
    return 0;
}
