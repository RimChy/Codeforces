#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,k,pen=0,pencil=0;
        cin>>a>>b>>c>>d>>k;
        if(a%c==0){
            pen=a/c;
        }
        else pen=(a/c)+1;
        if(b%d==0) pencil=b/d;
        else pencil=(b/d)+1;
        if(pen+pencil<=k) cout<<pen<<" "<<k-pen<<endl;
        else cout<<-1<<endl;
    }
}
