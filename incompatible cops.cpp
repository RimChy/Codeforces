#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+2];
    a[1]=1;
   for(int i=2;i<=n;i++){
    a[i]=a[i-1]*2;
   }
   cout<<a[n]<<endl;
}
