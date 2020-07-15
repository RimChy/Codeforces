#include<bits/stdc++.h>
    long arr[10005];
    int n,k,coin[105];
    long coinchange(int k)
     {

         for(int i=0;i<n;i++)
         {
             for(int j=1;j<=k;j++)
             {
                 if(coin[i]<=j)
                 arr[j]=arr[j]+arr[j-coin[i]];
             }
         }
           return arr[k];
     }

    int main()
    {

        while(~scanf("%d %d",&n,&k)){

            arr[0]=1;

        for(int i=0;i<n;i++)
        scanf("%d",&coin[i]);
        printf("%ld\n",coinchange(k)%100000007);
        }

    }

