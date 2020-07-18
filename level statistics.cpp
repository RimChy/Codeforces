#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,flag=0;
    cin>>t;
    while(t--)
    {

        flag=0;
        cin>>n;
        int a[n+1],b[n+1];
        for(i=0; i<n; ++i)
        {

            cin>>a[i]>>b[i];

        }


        for(i=1; i<n; ++i)
        {
            if((a[i-1]==a[i])&&(b[i-1]!=b[i]))
            {
                flag=1;
                break;
            }
            if((a[i-1]>a[i])||(b[i-1]>b[i])||((a[i]-a[i-1])<(b[i]-b[i-1]))||(a[i]<b[i]))
            {
                flag=1;
                break;
            }
        }

        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}
