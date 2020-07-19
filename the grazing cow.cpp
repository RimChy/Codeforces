#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double pi=2*acos(0);
    cin>>t;
    while(t--){
            double a,b,x,y,z,p;
            cin>>a>>b;
   a/=2;
    b/=2;
    x=a,y=b;

    z=sqrt(y*y-x*x);

    p=pi*y*z;
    printf("%.3lf\n",p);

    }
}
