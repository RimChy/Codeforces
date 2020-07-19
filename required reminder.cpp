#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int m=n%x;
        cout<<m<<endl;
       // if(m==y) cout<<n<<endl;
        else{
                if(m>y) cout<<n-(m-y)<<endl;
            else{
               int p=n/x;
               cout<<(x*(p-1))+y<<endl;
            }
        }

        }
}
