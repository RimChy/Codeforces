#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p=0,x=0;
    cin>>t;
    while(t--){
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]%2==1) {
                p++;

        }
    }
    if(p<k || k%2!=p%2) {
        cout<<"NO"<<endl;
    }
    else {
            cout<<"YES"<<endl;
       for(int i=0;i<n;i++){
         if(k==1) break;
         if(a[i]%2==1) {
                cout<<i+1<<" ";
                k--;
         }
       }
       cout<<n<<endl;
    }


    p=0;
    }
}
