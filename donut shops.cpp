#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a<c) cout<<1<<" ";
        else{
                if(a*b<c) cout<<b<<endl;
           else if if((b+1)*a<c*2)) cout<<b+1<<" ";
            else cout<<-1<<" ";
        }
        if(a*b>c) cout<<b<<endl;
        else{
            cout<<-1<<endl;
        }

    }
}
