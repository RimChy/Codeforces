#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,t,sum=0;
    cin>>n>>d;
    int a[n+1];
     for(int i =0 ; i<n; i++)
    {
        cin>>a[i];

        if(i<n-1) sum+=a[i]+10;
        else sum+=a[i];
        }
        if(sum>d) cout<<-1<<endl;
        else {
            int x=d-sum;
            int y=(n-1)*2;
            cout<<y+x/5<<endl;

        }




}
