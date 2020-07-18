#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1) cout<<"FastestFinger"<<endl;
        else if(n%2!=0) cout<<"Ashishgup"<<endl;
        else {
                int x,p=0;
                while(n>1){
                        int flag=0;
                    if(n%2==0){
            for(int i=3;i<=n/2;i++){
                if(n%i==0 && i%2==1) {
                    n=n/i;
                    flag=1;
        break;
                }
            }
                    }
                    else {
                        n=1;
                        flag=1;
                    }
            if(flag==0) n-=1;
            p++;
           // cout<<p<<endl;
        }
        if(p%2==1) cout<<"Ashishgup"<<endl;
        else cout<<"FastestFinger"<<endl;

        }
    }
}
