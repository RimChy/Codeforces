#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int x=a+b,y=a-b,p=c+d,q=c-d;
        double ans=ceil(p/n),ans1=ceil(q/n);
      //  cout<<ans<<" "<<ans1<<endl;
        if( y*n>p|| x*n<q){
            cout<<"No"<<endl;
        }
        else cout<<"YES"<<endl;

    }
}
