#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[10005];



    while(gets(s))
    {

        int l = strlen(s),sum=0;


        for(int i=0; i<l; i++)
        {
            sum += (s[i] - '0') * (pow(2, l-i) - 1);

        }
        if(sum==0)
            break;
        else
            printf("%d\n", sum);

    }


    return 0;
}
