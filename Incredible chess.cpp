
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,c=1,nim=0;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int w[n+1],b[n+1];


        for (int i = 0; i < n; i++)
        {
            cin>>w[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }

        for (int i = 0; i < n; i++)
        {
            nim = nim ^ (b[i] - w[i] - 1);
        }
        cout<<"Case "<<c++<<": ";
        if(!nim)
        {
            cout<<"black wins"<<endl;
        }

        else
        {
            cout<<"white wins"<<endl;

        }
        nim=0;

    }

}



