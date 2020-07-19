#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p=0,r,b,g,m,ma;
    cin>>t;
    while(t--){
            cin>>r>>b>>g;
        while(m>0){
            m=min(r,min(b,g));
            ma=max(r,max(b,g));
            if(m==r && ma==b){
                b-=1;
                r-=1;
                p++;
            }
            else if(m==r && ma==g){
                g-=1;
                r-=1;
                p++;
            }
            else if(m==b && ma==g){
                b-=1;
                g-=1;
                p++;
            }
            else if(m==b && ma==r){
                b-=1;
                r-=1;
                p++;
            }
            else if(m==g && ma==r){
                g-=1;
                r-=1;
                p++;
            }
            else {
                g-=1;
                b-=1;
                p++;
            }
        }
        cout<<p+min(b,min(r,g))<<endl;



    }
}
