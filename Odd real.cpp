#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n,Case=1,sum,j;
    cin >> n;
    int l,r;
    for (int i=0;i<n;i++)
    {
        cin >> l >> r;
       int  number=0;

    for (int k=l;k<=r;k++)
    {
       for (int j=1;j<=k;j++){
               int l=0;

            if (k%j==0)
            {
                l++;
                if(l % 2 != 0) number++;
            }
        }
    }
        printf ("Case %d:",Case++);
    printf ("%d\n",number);
    }

    }

//    printf ("Case %d:",Case++);
//    printf ("%d\n",number);

