#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,r,x;
        cin>>l>>r>>x;
        if(l>x){
            cout<<x<<endl;
        }
        else{
          if((r+1)%x==0) cout<<(long long)(r+1)<<endl;
        else cout<<(long long )((((r+1)/x)+1)*x)<<endl;
        }
    }
}
