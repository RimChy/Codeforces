#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int sum=0;
    int p=0,ans=0,j=-1;;
    for(int i=0;i<n;i++){
            //cout<<sum<<" "<<i<<" "<<j<<endl;
            if(sum+a[i]<=k) {
                sum+=a[i];

            }
            else {
                sum+=a[i];
                while(sum>k){
                    j++;
                    sum-=a[j];
                }
            }
        // cout<<p<<endl;
        ans=max(ans,i-j);


    }

    cout<<ans<<endl;

}
