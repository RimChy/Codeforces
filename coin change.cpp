#include<bits/stdc++.h>
using namespace std;
int main()
{


long arr[1010];
memset(arr,0,sizeof(arr));
int n,k,coin[]={1,5,10};


     arr[0]=1;
    for(int i=0; i<3; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            if(coin[i]<=j)
                arr[j]=arr[j]+arr[j-coin[i]];
        }
    }



}



