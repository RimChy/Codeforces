#include<bits/stdc++.h>
using namespace std;
int n;
char ans[100],s[]={'A','B','C'};
void permutation(int index)
{
    if(index==n)
    {
        printf("%s\n", ans);
        return;
    }
    for(int i=0; i<n; i++)
    {
        ans[index]=s[i];
        permutation(index+1);
    }
}
int main()
{
    scanf("%s",s);
    n=;
    ans[n]='\0';
    permutation(0);
    return 0;
}
