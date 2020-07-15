#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,x,y,xn,yn;
    cin>>r>>x>>y>>xn>>yn;
    double d=sqrt((x - xn)*(x - xn) +
                    (y - yn)*(y - yn));

     cout<<ceil(d/(2*r))<<endl;
}
