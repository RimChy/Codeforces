#include<bits/stdc++.h>
using namespace std;
int main()
{


      int t;
      cin>>t;
      while(t--){
           int n;cin>>n;
           int a[n+2];
           map<int,int>mp;


           for(int i=1;i<=n;i++) {
                cin>>a[i];

           }
           int x,flag=1;
           for(int i=1;i<=n-2;i++){
            if(a[i]<a[i+1] && a[i+1]>a[i+2]){
                flag=0;
                x=i;
                break;
            }
           }
           if(flag==0)

               cout<<"YES"<<endl<<x<<" "<<x+1<<" "<<x+2<<endl;
           else cout<<"NO"<<endl;






      }
}
