#include<bits/stdc++.h>

using namespace std;

int main()
{
        long long int i,j,k,f,l,n,q;


        scanf("%lld",&n);
        long long int x[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&x[i]);
        }
         sort(x,x+n);
        scanf("%lld4d",&q);
        long long int m[q];
        for(i=0;i<q;i++)
        {
            scanf("%lld",&m[i]);
            cout<<upper_bound(x,x+n,m[i])-x<<"\n";
        }




}
