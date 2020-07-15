#include<stdio.h>
int main()
{
    int num1,num2,sum=0,n1,n2,i;
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
    {
        n1=num1;
        n2=num2;
    }
    else
    {
        n1=num2;
        n2=num1;
    }
    for (i=n1; i<=n2; i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);

    return 0;
}
