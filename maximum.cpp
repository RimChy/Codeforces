#include<stdio.h>
int main()
{
    int n,i,min=100000;
    scanf("%d",&n);
    int ar[n-1];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);



        if(ar[i]<min)

        {
            min=ar[i];

        }

    }
    printf("minimum=%d",min);
}

