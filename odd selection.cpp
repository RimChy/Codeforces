#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;
       // n=rand()%10,x=rand()%10-5;
        //cout<<n<<" "<<x;
        int a[n+1];
        int p=0,q=0;
        for(int i=0;i<n;i++){
        cin>>a[i];
          //  a[i]=rand()%10+7;
           // cout<<a[i]<<" ";
            if(a[i]%2==0) p++;
            else q++;
        }
       // cout<<endl;
      if(q==0) cout<<"No"<<endl;
       else if(q==n){
            if(x%2==0) cout<<"No"<<endl;
       else cout<<"Yes"<<endl;
       }
       else if(p>=x-1) cout<<"Yes"<<endl;
       else if(p<x-1){
        if((x-p)%2!=0) cout<<"Yes"<<endl;
        else{
            if(x-p+1<=q) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
       }





    }
}
