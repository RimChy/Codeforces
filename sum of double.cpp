#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j;
    cin>>a>>b>>c;

    for(i=0; i<=10000; i++)
    {
        for(j=0; j<=1000; j++)
        {
            if(a*i + b*j == c)
            {
                cout<<"Yes\n";
                return 0;
            }

        }
    }
    cout<<"No"<<endl;
}


