#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        int p=0,m=0;
        for(int i=0;i<n;i++){
            if(a[i]!=i+1) break;
            else p++;
        }
         for(int i=n-1;i>=0;i--){
            if(a[i]!=i+1) break;
            else m++;
        }
        int x=max(m,p);
        int y=0,z=0;
        if(x==n) cout<<0<<endl;
        else{

            for(int i=p;i<n-m;i++){
                if(a[i]==i+1) y++;
            }
            if(y>=1) cout<<2<<endl;
            else cout<<1<<endl;
        }


    }
}
