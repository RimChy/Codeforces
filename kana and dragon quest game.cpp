#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int h,n,m,x,y;
        cin>>h>>n>>m;
         int p=h;
        for(int i=0;i<n;i++){
                if(h<=18) break;
            h=(h/2)+10;


        }
        h=h-m*10;
        y=p-m*10;
         if(y>0){
        for(int i=0;i<n;i++){
            y=(y/2)+10;

        }
        }
       // cout<<x<<" "<<y<<endl;
        if(h<=0 || y<=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;





    }
}
