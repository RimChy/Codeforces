#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int k,l,a=0,flag=0,div=0;
    cin>>k>>l;
    while(l%k==0)
    {
        l/=k;
        a+=1;
    }
    if(l==1 )
    {

        cout<<"YES"<<endl;
        cout<<a-1<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}


