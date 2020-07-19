#include <stdio.h>
int main()
{
    int i, j;
    scanf("%d", &i);
    for(i = 0;i <= 5;i++) {
        for(j = 1 ;j < i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
