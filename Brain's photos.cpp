#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v=5,u=9,*pu,*pv;
    pv=&v;
    u=*pv+10;
    pu=&u;
    cout<<v<<" "<<pu<<endl;
    cout<<u<<" "<<pv<<endl;
}

