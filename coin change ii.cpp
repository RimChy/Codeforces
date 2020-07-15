#include <bits/stdc++.h>

using namespace std;

int k, n, a[100],c[100], dp[100][1008];


long long  coin_change(int i, int amount)
{
    long long ans;

    ans = 0;



    if(amount == k)
    {
        return 1;
    }

    if(i == n)
    {
        return 0;
    }

    if(dp[i][amount] != -1)
    {
        return dp[i][amount];
    }

    for (int j = 0; j <= c[i] ; j++)
    {
        if(j * a[i] + amount <= k)
        {
            ans += coin_change(i+1, amount + j * a[i]);

        }
    }


    return dp[i][amount] =ans%100000007;

}

int main()
{

    int t;
    int mod;

    mod = 1e8 + 7;
    scanf("%d", &t);

    for (int cs = 1; cs <= t; cs++)
    {
        scanf("%d", &n);
        scanf("%d", &k);


        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d",&c[i]);
        }

        memset(dp, -1, sizeof dp);

        printf("Case %d: %lld\n", cs, coin_change(0, 0));

    }

}

