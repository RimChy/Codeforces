#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,i,k,g=0,sq,d;
    cin>>n>>k;
    sq=sqrt(n);
    vector<long long int>ara;
    for(i=1; i<=sq; i++)
    {
        if(n%i==0)
        {
            d=n/i;
            if((d*d)!=n)
            {
                ara.push_back(d);
                g++;

            }
            ara.push_back(i);
            g++;
        }
    }
    sort(ara.begin(),ara.end());
    if(k>g) {
            printf("-1\n");
    }
    else {
            printf("%lld\n",ara[k-1]);
    }

    return 0;
}
