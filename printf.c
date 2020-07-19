#include <stdio.h>
int main()
{


   int a = 1234,j = 01777,k = 0xa08c;


   printf(":%8u %8o %8x:\n\n",a,j,k);
   printf(":%-8u %-8o %-8x:\n\n",a,j,k);
   printf(":%#8u %#8o %#8x:\n\n",a,j,k);
   printf(":%08u %08o %08x:\n\n",a,j,k);


   return 0;
}

