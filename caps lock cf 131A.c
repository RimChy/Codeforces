#include <stdio.h>

#include <string.h>
#include <ctype.h>
int main()
{
    char s[100],u;
    int i,j=0,k=0,count;
    gets(s);

    for (i = 0; i < strlen(s); i++)
    {


        if (s[i] >= 'A' && s[i] <= 'Z' )
        {
            j++;
        }
        else if(s[i] >='a' && s[i] <= 'z')
        {
            k++;
        }


    }
    if(s[0] >= 'a' && s[0] <= 'z')
    {

        for(count = 0; count < strlen(s); ++count)
        {
            s[0] = toupper(s[0]);
            s[strlen(s)-count] = tolower(s[strlen(s)-count]);




        }

    }

    puts(s);
    return 0;
}



