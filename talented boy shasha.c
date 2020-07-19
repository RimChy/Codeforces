#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    int i,l=0,n,len;
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        scanf("%s",s);
        len = strlen(s);


        if(s[0] == 'n' && s[len-1] == 'd')
        {
            l++;

        }
    }

    printf("%d\n",l);
    return 0;
}
