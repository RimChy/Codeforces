#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--){
           int n;
           cin>>n;
           int a[n+1],b[n+1];
           for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                if(a[i]>0) a[i]=a[i]*(-1);
            }
            else{
                if(a[i]<0) a[i]=abs(a[i]);
            }

           }
           for(int i=0;i<n;i++) cout<<a[i]<<" ";
           cout<<endl;


      }
}
