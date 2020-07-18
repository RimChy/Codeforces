#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0,p=0,x;
    cin>>n;
    long long int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[n-1]-a[0]<<" ";

            if(a[0]==a[n-1])
    {
        if(n%2==0)
            x=(n/2*(n-1));
        else
            x=(n/2*n);
    }else{
         for(int i=0;i<n;i++){

        if(a[i]==a[0]) c++;
        else if(a[i]==a[n-1]) p++;


    }
     x=c*p;
    }
    cout<<x<<endl;
}
