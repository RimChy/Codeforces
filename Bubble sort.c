#include <stdio.h>
int main()
{
    int s[100];
    int i,j,n,temp = 0,l;
    scanf("%d",&n);
    for(i = 0;i < n;i++) {
        scanf("%d",s[i]);
    }


    for(i = 0; i < n; i++)
    {
        for (j = i+1; j< n; j++)
        {
            if(s[i]  > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
   }

    for(i=0;i < n;i++) {
    printf("%d ",s[i]);
    }
    return 0;
}
