
#include <bits/stdc++.h>
using namespace std;
#define maxx 1000005
char text[maxx], pattern[maxx];
int lps[maxx];

void flps(char pattern[])
{
    int i=0,j=-1,len=0,p=strlen(pattern);
    lps[i]=-1;
    while(i<p)
    {
        while(j>=0 && pattern[i]!=pattern[j]) j=lps[j];
                  i++;
                  j++;
                  lps[i]=j;
        }




}
int kmp(char text[],char pattern[])
{
    int i=0,j=0,k=0,x=0,t=strlen(text),p=strlen(pattern);
    flps(pattern);
    while(i<t)
    {
        while(j>=0 && text[i]!=pattern[j]) j=lps[j];

        i++;j++;
        if(j==p)
        {

            j=lps[j];
            k++;


        }
    }


    return k;
}



int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%s%s",text,pattern);
        printf("Case %d: %d\n",i+1,kmp(text,pattern));
    }
    return 0;
}
