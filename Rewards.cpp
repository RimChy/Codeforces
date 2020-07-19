#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    float sum,l;
    sum=a1+a2+a3,l=b1+b2+b3;
    if((ceil(sum/5) + ceil(l/10) ) <= n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
