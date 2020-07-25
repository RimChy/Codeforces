#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int a,b,c;
        if(x==y || y==z || z==x){
            if(x==y){
                if(z>x) cout<<"NO"<<endl;
                else
                {
                    cout<<"YES"<<endl<<x<<" "<<z<<" "<<1<<endl;
                }
            }
            else if(y==z) {

                if(x>y) cout<<"NO"<<endl;
                else cout<<"YES"<<endl<<x<<" "<<y<<" "<<1<<endl;

            }
            else if(z==x){
                if(y>x) cout<<"NO"<<endl;
                else  cout<<"YES"<<endl<<1<<" "<<x<<" "<<y<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }
}
