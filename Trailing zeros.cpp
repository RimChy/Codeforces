#include<bits/stdc++.h>
using namespace std;
int count_number(int n,int x)
{
    int count=0;
    while(n%x==0){
        count++;
        n=n/x;
    }
    return count;
}
int count_zero(int n,int x){
   int c=0;
   for(int i=x;n/i>=1;i*=x){
       c+=n/i;
   }
   return c;
}
int main()
{
    int t,c=1;
   scanf("%d",&t);
    while(t--){
        int n,r,p,q;
        scanf("%d %d %d %d",&n,&r,&p,&q);
        int x,y,z,w;
        x=count_zero(n,2)-count_zero(r,2)-count_zero(n-r,2);
        z=count_zero(n,5)-count_zero(r,5)-count_zero(n-r,5);
        y=q*count_number(p,2);
        w=q*count_number(p,5);
     printf("Case %d: %d\n",c++,min(x+y,z+w));


    }
}
