#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,l,r,x=1,y=1,sum=0,sum1=0;
    cin>>n>>l>>r;
    for(int i=1;i<l;i++){
        x=x*2;
        sum+=x;
    }
    sum=n-l+1+sum;
    cout<<sum<<endl;
    for(int i=1;i<r;i++){
        y=y*2;
        sum1+=y;
    }
    sum1=1+sum1+(n-r)*y;
    cout<<sum1<<endl;
}
