#include<bits/stdc++.h>
#define maxx 1000000007
using namespace std;
int main()
{
    long long arr[7],y,x,n,ans;
    cin>>x>>y>>n;
   arr[1] = (x+maxx) % maxx;
        arr[2] = (y+maxx) % maxx;
        arr[3] = (y-x+maxx) % maxx;
        arr[4] = (-x+maxx) % maxx;
        arr[5] = (-y+maxx) % maxx;
        arr[6] = (x-y+maxx) % maxx;
        n %= 6;

        if (n == 0)
            n = 6;

        ans = (arr[n]+maxx) % maxx;
        cout<<ans<<endl;
}
