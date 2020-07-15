#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    scanf("%I64d %I64d",&n,&k);
    long long int a[n+1];
    for(int i=0;i<n;i++){
        scanf("%I64d",&a[i]);
    }
    sort(a,a+n);
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=(a[i]*k);
        if(k>1){
            k--;
        }
    }
    printf("%I64d\n",sum);
}
