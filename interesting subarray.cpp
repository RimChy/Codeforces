#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m=0,flag=1;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            if(abs(a[i+1]-a[i])>=2){
                flag=0;
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
        if(flag) cout<<"NO"<<endl;

    }
}
