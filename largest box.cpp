#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t,c=1;
        double l,w,a,b;
        cin>>t;
        while(t--)
        {
                scanf("%lf %lf",&l,&w);
                a = (w+l-sqrt(w*w+l*l-w*l))/6;

                b=(w-2*a)*(l-2*a)*a;
                printf("Case %d: %lf\n",c++,b);

        }


}
