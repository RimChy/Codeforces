#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0;
    cin>>n;
    int a[n+1],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
   for(int i=1;i<=5;i++){
    if((sum+i)%(n+1)==1) p++;
   }
   cout<<5-p<<endl;

}
