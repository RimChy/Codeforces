#include <stdio.h>
#include <string.h>
int main()
{
    char S[5000];
    int length = strlen(S),i;
    while (S[i] >= 'a' && S[i] <= 'c') {
        gets(S);
    }
    if ( S[0] != 'a') {
        printf("NO\n");
    }

    return 0;
}
