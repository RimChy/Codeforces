#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    int i,j=0,n;
    scanf("%d",&n);
    for(i=0;i<n; ++i)
    {
        scanf("%s",s);


        if(s[0] != 'n' && s[strlen(s)-1] != 'd')
        {
            j++;

        }
    }

    printf("%d\n",n-j);
    return 0;
}
