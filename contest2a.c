#include <stdio.h>
#define EOF '\n'
int main()
{
    int n,i;
    char s[100],ch[100],a[100],temp[100];
    while(scanf("%s %s %s",s,ch,a) != EOF)
    {


        printf("%s %s %s\n",s,a,ch);
    }

    return 0;
}
