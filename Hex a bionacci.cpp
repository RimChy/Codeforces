#include<bits/stdc++.h>
using namespace std;

int dp[100];

int a, b, c, d, e, f;
int fn( int n ) {
    if( n == 0 ) dp[n]=a;
    if( n == 1 ) dp[n]=b;
    if( n == 2 ) dp[n]=c;
    if( n == 3 ) dp[n]=d;
    if( n == 4 ) dp[n]=e;
    if( n == 5 ) dp[n]=f;
    if(dp[n] != -1) return dp[n];
    else {
        dp[n]=( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) ;
    }
    return dp[n];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
