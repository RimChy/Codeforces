#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

            int x=min(a,b),y=max(a,b);
            if(x*2<=y) cout<<x<<endl;
            else
            {
              int c=(a+b)/3;
              cout<<min(c,x);
            }


    }
}






