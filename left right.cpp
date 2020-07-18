#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t,n,a,b,c=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int nim = 0;
        for(int i = 0; i < n; ++i)
        {
            cin>>a>>b;
            nim ^= (b-a-1);
        }
        cout<<"Case "<<c++<<": ";
        if(!nim)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
    return 0;
}
