#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  a[10000];
    a[0]=1;
    for(int i=1;i<=10000;i++){
        a[i]=a[i-1]+i+1;
    }
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x=a[n-1];
        cout<<(x*(x+1))/2<<endl;
    }

}
