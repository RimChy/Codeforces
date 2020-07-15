#include <bits/stdc++.h>
#define MAX 5010
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int n, x;
    vector<int>p[MAX];
    scanf("%d", &n);
    for(int i=0; i<n*2; i++)
    {
        scanf("%d", &x);
        p[x].push_back(i+1);
    }
    int flag=0;
    for(int i=0; i<MAX; i++)
    {
        if(p[i].size()%2==1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("-1\n");
        return 0;
    }
    for(int i=0; i<MAX; i++)
    {
        for(int j=0; j<p[i].size(); j+=2)
        {
            printf("%d %d\n", p[i][j], p[i][j+1]);
        }
    }
    return 0;
}
