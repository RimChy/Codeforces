#include <iostream>
#include<string.h>
#include<cstdio>

using namespace std;


char pattern[105], text[105];
int lps[105],k=0;

void KMP()
{
    int i, pos = 0, flag, lt = strlen(text), lp = strlen(pattern);

    for(i = 0; i < lt; ++i)
    {
        if(text[i] == pattern[pos])
            ++pos;
        else if(pos > 0)
        {
            pos = lps[pos - 1];
            flag = 1;
            while(pattern[pos] != text[i])
            {
                if(pos == 0)
                {
                    flag = 0;
                    break;
                }
                pos = lps[pos - 1];
            }
            if(flag == 1)
                ++pos;
        }

        if(pos == lp)
        {
           // printf("Patten is found at index: %d\n", i - lp + 1);
            pos = lps[pos - 1];
            k++;
        }
    }

    return ;
}

void lpsFunc()
{
    int i, flag, pos, l = strlen(pattern);

    for(i = 1; i < l; ++i)
    {
        pos = lps[i - 1];
        flag = 1;
        while(pattern[pos] != pattern[i])
        {
            if(pos == 0)
            {
                flag = 0;
                lps[i] = 0;
                break;
            }
            pos = lps[pos - 1];
        }
        if(flag == 1)
            lps[i] = pos + 1;
    }

   // for(i = 0; i < l; ++i)
      //  printf("The lps value at index: %d is --> %d\n", i, lps[i]);

    return ;
}

int main()
{
    int n;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%s %s", pattern, text);

        lpsFunc();

     KMP();
       printf("%d\n",k);
        k=0;
    }

    return 0;
}
