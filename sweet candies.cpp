#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[4];
    cin>>t;
    while(t--){
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[1]!=a[2]){


        int x=a[0]+min((a[2]-a[0]),a[1]);
         cout<<x<<endl;

        }
        else if(a[1]==a[2]&& a[0]!=a[1]){
            if(a[0]%2==0){
                cout<<a[0]+(a[1]-(a[0]/2))<<endl;
            }
            else {
                cout<<a[0]+(a[1]-(a[0]/2+1))<<endl;
            }
        }
        else if(a[0]==a[1] && a[1]==a[2]){
            cout<<a[0]+a[0]/2<<endl;
        }

    }
}
