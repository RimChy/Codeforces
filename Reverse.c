#include <stdio.h>
#define EOLN '\n'
void reverse (void) ; /* function prototype */
main( )
{
    printf ("Please enter a line of text below\n");
    reverse ( ) ;
}
void reverse(void) /* read a line of characters and write it out backwards */

    char c;
    {
        if((c = getchar()) != EOLN)
            reverse();
    }


    return;
}
