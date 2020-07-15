#include <stdio.h>
int main()
{
    int i,t,a,b,j;
    char s[100000];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&a,&b);
        b++;
        scanf("%s",s+1);
        int num=0,g=1;
        for(int i=1;i<= a;i++)
        {
            if(s[i]=='0')
            {
                num++;
                if(num>=b)
                {

                    g=0;
                    break;
                }
            }
            else num=0;
        }
        printf("%s\n",g?"no":"yes");
        }


}



