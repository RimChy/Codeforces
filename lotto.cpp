#include <bits/stdc++.h>

using namespace std;

int n,s[60],ans[7],c=0,visit[50];

void lotto (int l,int index)
{
    if (l==6)
    {
        for (int i=0;i<5;i++)
        {
            printf("%d ",ans[i]);
        }
        printf("%d\n",ans[5]);
        return;
    }

    for (int i=index;i<n;i++)
    {
        if (visit[i]==0)
        {
            visit[i]=1;
            ans[l]=s[i];
            lotto (l+1,i+1);
            visit[i]=0;
        }
    }
}
int main()
{

    while (scanf("%d",&n) && n)
    {
        if (c++)
        {
            printf("\n");
        }

        for (int i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
            memset(visit,0,sizeof(visit));
        }

        lotto (0,0);
    }
}
