#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        if(x<a[0]) cout<<x<<endl;
        else{
             int k=a[0]-1;
             x=x-k;
            int v=a[0];
           // cout<<x<<endl;
        for(int i=1;i<n;i++){
                k=a[i]-a[i-1]-1;
               // cout<<k<<endl;
            if(x>0){
            if(x>=k && k>0){
                x=x-k;
                v=a[i];
            }
           else {
             if(k==0) v=a[i];
          // cout<<v<<" "<<x<<endl;
        }
            }
            else break;
        }


        cout<<v+x<<endl;
        }
    }
}
