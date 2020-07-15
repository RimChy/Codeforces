#include <stdio.h>
#include <string.h>
int main()
{
    int s[100];
    int i,j,n,temp;


        for(i = 0;i < strlen(s);i++) {
            for(j = i+1;j < strlen(s);j++) {
                if(s[i] > s[j]) {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        for(i = 0;i < strlen(s);i++) {
            printf("%d\n",s[i]);
        }

}
