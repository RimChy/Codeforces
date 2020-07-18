#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==y) cout<<"YES"<<endl;
       else if(x==2 && y<=3) cout<<"YES"<<endl;
       else if(x%2==0 && x!=2) cout<<"YES"<<endl;
       else if(x%2==0 && x>y) cout<<"YES"<<endl;
       else if(x%2!=0 && x>y) cout<<"YES"<<endl;
       else if(x%2!=0 && x>3) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;


    }
}
