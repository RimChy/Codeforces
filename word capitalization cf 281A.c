#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1000];
    int i;
    gets(s);


        if (s[0] >= 'A' && s[0] <= 'Z')
        {
            puts(s);
        }
        else
        {
            s[0] = toupper(s[0]);
            printf("%s\n",s);
        }

    return 0;
}
