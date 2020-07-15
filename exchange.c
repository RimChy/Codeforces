#include <stdio.h>
int main()
{
    int a = 10,b = 5;
    int temp=0;
    temp = a;
    a = b;
    b = temp;

    printf("a = %d b = %d\n",a,b);
    return 0;

}
