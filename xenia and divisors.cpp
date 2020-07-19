#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],p1=0,q2=0,r3=0,x4=0,y6=0,b5=0,c7=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) p1++;
        if(a[i]==2) q2++;
        if(a[i]==3) r3++;
        if(a[i]==4) x4++;
        if(a[i]==6) y6++;
        if(a[i]==5) b5++;
        if(a[i]==7) c7++;

    }
   // cout<<p1<<q2<<r3<<x4<<y6;
    n=n/3;
    if(p1!=n || b5>0|| c7>0|| y6<r3 || q2<x4 || q2+r3!=x4+y6) cout<<-1<<endl;
    else{
       for(int i=1;i<=r3;i++){
        cout<<1<<" "<<3<<" "<<6<<endl;
       }
       y6=y6-r3;
       for(int i=1;i<=x4;i++){
        cout<<1<<" "<<2<<" "<<4<<endl;
       }
       q2=q2-x4;
       for(int i=0;i<q2;i++){
        cout<<1<<" "<<2<<" "<<6<<endl;
       }
    }

}
