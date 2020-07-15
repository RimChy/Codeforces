#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a[13],sum=0,p=0,x=0;
   cin>>n;
   for(int i=0;i<12;i++){
    cin>>a[i];
    x+=a[i];
   }
   if(n>x) {
        cout<<-1<<endl;
   return 0;
   }
   if(n==0){
    cout<<0<<endl;
    return 0;
   }
   sort(a,a+12);
   for(int i=11;i>=0;i--){
       sum+=a[i];
    p++;
    if(sum>=n) break;


   }
cout<<p<<endl;



}


