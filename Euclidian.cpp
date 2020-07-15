#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int gcdequ(int a,int b)
{
    if(b==0)
    {
        x=1,y=0;
        return a;
    }
    int gcd=gcdequ(b,a%b);
    z=x;
    x=y;
    y=z-a/b*y;
    return gcd;
}

    int main()
    {
        int t,a,b,z;

        while(~scanf("%d %d",&a,&b)){

        z=gcdequ(a,b);
        cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
