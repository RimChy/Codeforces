#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,m,x;
    while(~scanf("%llu",&n))
    {
        if(n==0)
            break;
        x=(n*10)/9;
        if(n%9==0)
           cout<<x-1<<" "<<x<<endl;
        else
            cout<<x<<endl;
    }

}
