#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1],b[n+1];
        long long sum=0;
        for(int i=0;i<n;i++) {
                cin>>a[i];
                sum+=a[i];
        }

        for(int i=0;i<n;i++) cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);

            if(a[0]>=b[n-1] || k==0) cout<<sum<<endl;
            else{
                for(int i=0;i<k;i++){
                      if(a[i]<b[n-1-i]){
                        sum-=a[i];
                        sum+=b[n-1-i];
                      }
                      else break;

                }
                cout<<sum<<endl;
            }


}
}
