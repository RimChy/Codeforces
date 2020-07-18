#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,x=0,c=0,p=0,m=0;
    cin>>n;
    while(n--){
       cin>>a;
       if(a<0) {
            c++;
            x+=abs(a+1);
       }
       //cout<<x<<" ";
       if(a>0) {
            p++;
            x+=abs(a-1);
       }
      // cout<<x<<" ";
       if(a==0){
        m++;

       }
    }
   // cout<<m<<endl;
     if(c%2!=0) {
        if(m>0) x=x+m;
        else x=x+2;
     }
     else x=x+m;
     cout<<x<<endl;

}
