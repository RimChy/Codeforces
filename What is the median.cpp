#include<bits/stdc++.h>


using namespace std;
int main()
{
    long long a[10000],X,i=0;
    while(~scanf ("%lld",&X))
    {
        a[i]=X;
        sort (a,a+i+1);
        if (i%2==0)
        {
            cout<<a[i/2]<<endl;
        }
        else
        {

             cout<<(a[i/2]+a[(i/2)+1])/2<<endl;
        }
        i++;
    }

}








