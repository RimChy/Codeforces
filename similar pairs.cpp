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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int p=0,q=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0) p++;
            else q++;
        }
        if(p%2==0 && q%2==0) cout<<"YES"<<endl;
        else{
        sort(a,a+n);
        int c=0;
        for(int i=0;i<n-1;i++){
            if((abs(a[i]-a[i+1])==1)) {
               p--;
               q--;
               break;
               }
        }
        if(p%2==0 && q%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    }
}
