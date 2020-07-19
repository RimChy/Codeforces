#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k>n) cout<<"NO"<<endl;
        else{
            int x=n/k;
            int y=n%k;
            if(y==0){
                    cout<<"YES"<<endl;
                for(int i=0;i<k;i++){
                    cout<<x<<" ";
                }
            cout<<endl;
            }
            else{
                if(abs(n-2*(k-1))%2==0 && 2*k<=n){
                        {

                        cout<<"YES"<<endl;
                    for(int i=0;i<k-1;i++) cout<<2<<" ";
                    cout<<abs(n-(2*(k-1)))<<endl;
                        }


                }
                else if(abs(n-(k-1))%2==1 && n>=k){
                    cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++) cout<<1<<" ";
                cout<<n-(k-1)<<endl;

                }
                else{
                    cout<<"NO"<<endl;
                }

        }
    }
    }
}
