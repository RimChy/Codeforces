#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
    int gcd,t;

    if (a == 0)
        gcd = b;
    else if (b == 0)
        gcd = a;
    else
    {

        while (b != 0)
        {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }


    return gcd;
}

int main()
{
    int a,b,n,a1,b1;
    cin>>a>>b>>n;
    while( n>0)
    {

        a1=GCD(a,n);
        n=n-a1;
        if ( n<=0)
        {
            cout<<"0"<<endl;
            return 0;
        }
        b1=GCD(b,n);
        n=n-b1;
        if ( n<=0)
        {
            cout<<"1"<<endl;
            return 0;
        }

    }
}
