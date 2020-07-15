#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=2;i<=n;i++){
            cin>>arr[i];

    }
    int a,b;
    cin>>a>>b;
    long long sum=0;
    for(int i=a+1;i<=b;i++){
       sum+=arr[i];
    }
    cout<<sum<<endl;
}
