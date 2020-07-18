#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,ans=0;
        cin>>n>>x;
        int arr[n+1];
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        sort(arr,arr+n);
        reverse(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]>=x) {
                ans++;
                sum+=arr[i]-x;
            }
            else {
                sum+=arr[i];
                if(sum>=x){
                    ans++;
                    sum=sum-x;
                }
                else break;
            }
        }
        cout<<ans<<endl;

    }
}
