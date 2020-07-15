
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n],brr[n],sum=0;
     memset(arr,0,sizeof(arr));
    memset(brr,0,sizeof(brr));



    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&arr[i]);
        sum+=arr[i-1];
        brr[i]=sum;
      //  cout<<sum<<" "<<brr[i]<<endl;
    }
    sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=arr[i]*brr[i];
       // cout<<sum<<endl;
    }
    printf("%lld\n",sum);


}
