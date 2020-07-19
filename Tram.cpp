#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int i,j,a,x=0,y=0,b;

    for(i = 0; i<n; i++)
    {
        cin>>a>>b;
        x -= a;
        x += b;



        if(x > y)
        {
            y = x;

        }
    }


    cout<<y<<endl;

}
