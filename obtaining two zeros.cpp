#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c=0,x;
    cin>>t;
    while(t--){
        cin>>a>>b;


      while(a>0 && b>0 ){
        c=max(a,b);
        x=c/2;

        if(a>b){

            a-=2*x;
            b-=x;
        }
        else if(b>a)
            {

            a-=x;
            b-=2*x;
        }
        else {
            cout<<"No"<<endl;
            break;
        }



        }
        if(a==0 && b==0) cout<<"yes"<<endl;
        else if(a<0 || b<0) cout<<"no"<<endl;


       }



    }


