#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    int a[n+1],p=0;
    for(int i=0;i<n;i++){
            cin>>a[i];
    }
    if(n<=2)
    {
        cout<<n;
        return 0;
    }

    int i=0,m=0,x=2;
    while(i<=n-2)
    {
        if(a[i]+a[i+1]==a[i+2])
            x++,i++;

        else
        {
            m=max(m,x);
            x=2;i++;
        }
    }

    m=max(m,x);
    cout<<m<<endl;

    return 0;
}
