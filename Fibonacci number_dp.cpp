#include<bits/stdc++.h>
#define size 50005
using namespace std;
long long int arr[size];

long long int fib( long long int  n )
{
    arr[0]=0;
    arr[1]=1;

    if( arr[n]!=-1 )
        return arr[n];
    else
    {
        arr[n] = fib( n-1 ) + fib( n-2 );
        return arr[n];
    }
}
int main()
{
    long long int n;
    while(~scanf("%lld",&n)){


    memset(arr,-1,sizeof(arr));
    printf("The Fibonacci number for %lld is %lld\n",n,fib(n));
   }
}


