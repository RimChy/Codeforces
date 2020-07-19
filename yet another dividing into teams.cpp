#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int flag=1;
        for(int i=0;i<n;i++){
            if(a[i+1]-a[i]==1){
                flag=0;
                break;
            }
        }
        if(flag==1) cout<<1<<endl;
        else cout<<2<<endl;
    }
}
