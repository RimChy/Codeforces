#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    int i,j;
    gets(s);
    for(i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i]=tolower(s[i]);
        }
    }
    for(i = 0; i < strlen(s); i++) {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            printf(".");
            printf("%c",s[i]);
        }

    }
    return 0;
}







