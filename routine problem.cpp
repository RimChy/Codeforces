#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int c = a % b;
    while(c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=b*c,y=a*d;
    if(x>y) {
            int p=gcd(b*c-a*d,b*c);
        cout<<(b*c-a*d)/p<<"/"<<(b*c)/p<<endl;
    }
    else if(x<y){
            int p=gcd(a*d-b*c,a*d);
        cout<<(a*d-b*c)/p<<"/"<<(a*d)/p<<endl;
    }
    else cout<<0<<"/"<<(b*c)/gcd(b*c-a*d,b*c)<<endl;
}
