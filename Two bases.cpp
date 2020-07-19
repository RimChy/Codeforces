#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,x,y,bx,by,num1=0,num2=0;
    cin>>n>>bx;
    int a[n+1];
    for(int i=0;i<n;i++)
       {
           cin>>a[i];
           num1=num1*bx+a[i];
       }
    cin>>m>>by;
    int b[m+1];
    for(int i=0;i<m;i++)
      {
          cin>>b[i];
          num2=num2*by+b[i];
      }

    if(num1==num2) cout<<"="<<endl;
    else if(num1>num2) cout<<">"<<endl;
    else cout<<"<"<<endl;

}
