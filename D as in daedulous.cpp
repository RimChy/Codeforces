#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
   // while(~scanf("%d %d",&n,&m)){

    int p, b, d, ans=0, sum=0, i, j, x;
    for(i=1; i<=m; i++)
    {
        sum = 0;
        cin>>b;
        cin>>d;
        for(j=1; j<n; j++)
        {
            cin >> p ;
            sum += p;
        }
        if(sum>=b)
            continue;
        if(sum+d > b)
            b=0;
        x = b - sum;
        if(b-sum>=10000)
            ans += (10000 - b);
        else if((b-sum)>=1000)
            ans += (1000 - b);
        else if((b-sum)>=100)
            ans += (100 - b);
        else if((b-sum)>=10)
            ans += (10 - b);
        else if((b-sum)>=1)
            ans += (1- b);
    }
    cout<<ans<<endl;
   // }

}
