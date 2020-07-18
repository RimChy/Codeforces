 #include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
        else{
                int x,flag=1;
         for(int i=2;i*i<=n;i++){
            if(n%i==0){
                x=n/i;
        flag=0;
        break;
            }
         }
         if(flag==0) cout<<x<<" "<<n-x<<endl;
        else cout<<1<<" "<<n-1<<endl;

        }


    }
}
