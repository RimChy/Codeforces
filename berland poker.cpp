#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        int y=(n/k);
        if(y>=x) cout<<x<<endl;
        else{
            int r=x-y;
                if(r%(k-1)==0) cout<<y-(r/(k-1))<<endl;
                else cout<<y-(r/(k-1))-1<<endl;

        }
    }
}
