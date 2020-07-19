#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
    int a[n+3];
    map<int,int>mp;
    for(int i=1;i<=n;i++) {
            cin>>a[i];

    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
    int x=0,p=0;
    for(int i=1;i<=n;i++){
        if(i-x>=a[i]){
            x=i;
            p++;

        }
        cout<<x<<endl;
    }
    cout<<p<<endl;

    }

}
