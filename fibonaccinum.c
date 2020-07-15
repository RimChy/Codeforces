#include<stdio.h>
 int fib(int n)
 {
     int f[n+2];
     int i;
     f[0]=0;
     f[1]=1;
     printf("1\n");
     for(i=2;i<=n;i++)
     {
         f[i]=f[i-1]+f[i-2];
         printf("%d\n",f[i]);

     }
     return f[n];
 }
 int main()
 {
     int n;
     scanf("%d",&n);
     fib(n);
     getchar();
     return 0;
 }
