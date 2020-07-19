#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long b,p,f,h,c;
        cin>>b>>p>>f>>h>>c;
        if((p+f)*2<=b) cout<<h*p+c*f<<endl;
        else{
            if(h>c) {

               if(p*2<=b) cout<<p*h+(((b-(p*2)))/2)*c<<endl;
               else cout<<(b/2)*h<<endl;
            }
            else{
               if(f*2<=b) cout<<f*c+((b-(f*2))/2)*h<<endl;
               else cout<<(b/2)*c<<endl;
            }
        }

    }
}
