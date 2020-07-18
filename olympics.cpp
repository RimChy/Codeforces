#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, c=1;
    double a, b,r,the,x,y;
    char c1;
  cin>>t;
   while(t--)
    {
       cin>>a>>c1>>b;
        r = sqrt((a/2.0)*(a/2.0)+(b/2.0)*(b/2.0));
        the = 2.0*atan((b/2.0)/(a/2.0));
         x = r * the;
         y = 400.0/(2.0*a + 2.0*x);
         cout<<"Case "<<c++<<": ";
        printf("%.10lf %.10lf\n", y*a, y*b);
    }
}
