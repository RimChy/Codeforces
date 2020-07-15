#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

long long int arr[3000001/];

int main()
{

    long long int n,ans=0;
    cin>>n;
    for(int i=0;i<n;++i)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-1;++i)
        ans+=(arr[i])*(i+2);
    ans+=arr[n-1]*n;
    cout<<ans<<endl;
    return 0;
}
