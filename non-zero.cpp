#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],k=0;
        long long sum=0;
        for(int i=0;i<n;i++){
                cin>>a[i];
            if(a[i]==0){
                k++;
                sum+=a[i]+1;

            }
            else sum+=a[i];
        }
        if(sum==0) cout<<k+1<<endl;
        else cout<<k<<endl;
    }
}
