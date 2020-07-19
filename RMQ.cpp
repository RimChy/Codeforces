#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int sparseTable[100005][20], arr[100005], n;

void preprocessing()
{
    int i, j, x = log2(n), y = 0, z;
    //printf("%d\n", x);
    for(i = 0; i <= x; ++i)
    {
        for(j = 0; j < n - y; ++j)
        {
            if(i == 0)
            {
                sparseTable[j][i] = arr[j];
            }
            else
            {
                sparseTable[j][i] = min(sparseTable[j][i - 1], sparseTable[j + z][i - 1]);
            }
            //printf("%d %d %d\n", i, j, sparseTable[j][i]);
        }
        y = y * 2 + 1;
        z = (y + 1) / 2;
    }
}

int main()
{
    int t, q, cnt, totalNumbers, i, a, b, lv, pv;

    scanf("%d", &t);

    for(cnt = 1; cnt <= t; ++cnt)
    {
        scanf("%d %d", &n, &q);

        for(i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }

        preprocessing();

        printf("Case %d:\n", cnt);
        for(i = 0; i < q; ++i)
        {
            scanf("%d %d", &a, &b);

            totalNumbers = b - a + 1;

            lv = log2(totalNumbers);
            pv = pow(2, lv);

            //printf("%d %d*********\n", lv, pv);
            printf("%d\n", min(sparseTable[a][lv], sparseTable[b - pv + 1][lv]));
        }
    }
    return 0;
}



