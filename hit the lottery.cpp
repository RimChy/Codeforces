#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
  cin>>n;
    int a=n/100,b=n%100;
    int c=b/20,d=b%20,e=d/10,f=d%10,g=f/5,h=f%5,x=h/1;
    cout<<a+c+e+g+x<<endl;


}
