#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxw;
    int weight[1000],val[1000],mat[100][100],ans[100];
    cin>>n>>maxw;
    for(int i=0; i<n; i++)
    {
        cin>>weight[i];
        cin>>val[i];

    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= maxw; j++)
        {
            if (i == 0 || j == 0)
                mat[i][j] = 0;
            else if (weight[i - 1] <= j)
                mat[i][j] = max(val[i - 1] +
                               mat[i - 1][j - weight[i - 1]], mat[i - 1][j]);
            else
                mat[i][j] = mat[i - 1][j];
        }
    }
    cout<<mat[n][maxw]<<endl;
    int res = mat[n][maxw];


    int w = maxw;
    for (int i = n; i > 0 && res > 0; i--)
    {
        if (res == mat[i - 1][w])
            continue;
        else
        {
            printf("%d ", weight[i - 1]);
            res = res - val[i - 1];
            w = w - weight[i - 1];
        }
    }

    //cout<<mat[n][maxw]<<endl;

   /* int res = mat[n][maxw];
    printf("%d\n", res);

    int w = maxw;
    for (int i = n; i > 0 && res > 0; i--)
    {
        if (res == mat[i - 1][maxw])
            continue;
        else
        {
            printf("%d ", weight[i - 1]);
            res = res - val[i - 1];
            w = w - weight[i - 1];
        }
    }*/
}




