#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s,t;
    char c;
    t=0;
    cin>>m>>c>>s;
    while(m/10+m%10*10!=s)
    {
        s++,t++;
        if(s>59)
            m++,s=0;
        if(m>23)
            m=0;
    }
   cout<<t<<endl;
}
