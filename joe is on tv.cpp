#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    double sum=0;
    cin>>n;
    for(int i=n;i>=1;i--){
        sum+=(1.0/i);
    }
    cout<<fixed<<setprecision(10)<<sum<<endl;
}
