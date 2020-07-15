#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m%n==0 &&  m==n) cout<<0<<endl;
    else if(m%n!=0) cout<<-1<<endl;
    else{
        if(m==n) cout<<0<<endl;
    else {
            int x=m/n,p=0;
        while(x>1){
        if(x%2==0){
            p++;
            x/=2;
        }
        else if(x%3==0){
            p++;
            x/=3;
        }
        else {
            p=-1;
                break;
        }
        }
         if(p==-1) cout<<-1<<endl;
        else cout<<p<<endl;
    }
    }


}
