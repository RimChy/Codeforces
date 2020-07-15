#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int num[101],rem[101];


int x,y,z,ans,n;

int mod_inverse(int a,int b)
{
    if(b == 0)
    {
        x=1;
        y=0;
        return a;
    }

    int r=mod_inverse(b,a%b);
    z = x;
    x = y;
    y=z - (a/b)*y;

    return r;
}

void res_multiple_store()
{
    int prod =1;

for(int i=0 ; i<n ; i++)
    prod= num[i];

    for(int i=0 ; i<n ; i++)
    {

        mod_inverse(prod/num[i],num[i]);
        if(x<0) x = num[i]+ x;
        ans+= (prod/num[i])*x*rem[i];

    }
    ans = ans%prod;
}

int main()
{

    cin>>n;

    for(int i=0 ; i<n ; i++)
    {
        cin>>num[i]>>rem[i];
    }
    res_multiple_store();
    cout<<ans<<endl;
}

