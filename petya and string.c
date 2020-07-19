#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i,j,sum=0,temp=0;
    char s[100],a[100];
    scanf("%s",s);
    scanf("%s",a);
    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] < 97)
        {
            s[i] += 32;
        }
        if(a[i] < 97 )
        {
            a[i] += 32;
        }
    }







            if(s > a)
                {
                    printf("-11");

                }
                else if(s < a)
                {
                    printf("-1");
                }
                else if(s == a)
                {
                    printf("0");
                }






    return 0;
}
