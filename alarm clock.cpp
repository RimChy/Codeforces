#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>=a) cout<<b<<endl;
        else{
            if(c<=d) cout<<-1<<endl;
            else{
                long long int x=(a-b),y;
                if(x%(c-d)==0) y=x/(c-d);
                else y=(x/(c-d))+1;
                cout<<b+y*c<<endl;
            }
        }
    }
}
