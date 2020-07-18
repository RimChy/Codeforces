#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int x=1000000,y=1000000,c=0,d=0;
        int a[n+1],b[n+1];

        for(int i=0;i<n;i++) {
                cin>>a[i];
        }
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++){
            if(a[i]==-1 && c==0) {
                x=i;
                c++;
            }
            if(a[i]==1 && d==0){
                y=i;
                d++;
            }
        }

        int ans=0;
       if(a[0]!=b[0]) cout<<"NO"<<endl;
        else {

            for(int i=0;i<n;i++){
                if((b[i]>a[i] && i>y )|| (b[i]<a[i] && i>x) || a[i]==b[i] ) ans++;

            }
            if(ans==n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
