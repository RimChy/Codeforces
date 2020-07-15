#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        long long int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(a[0]>=x) cout<<n<<endl;
        else{
            long long prod=1,p=0;
            int y=0;
            for(int i=n-1;i>=0;i--){
                if(a[i]>=x) {
                        p++;
                        y=n-i;
                }
                else{
                  if((((n-i)-y))*a[i]>=x){
                    p++;
                    y=n-i;
                  }
                }
            }

        cout<<p<<endl;
        }

    }
}
