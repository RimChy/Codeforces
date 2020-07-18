#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,e,f;
    cin>>a>>b;

    int sum=a;
    while(1){
    c=a/b;
    a=c+(a%b);
    sum+=c;
    if(a<b) break;
    }
    cout<<sum<<endl;



}
