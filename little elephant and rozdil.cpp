#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n+1],x=10000000000,c=0,p=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<x){
            x=a[i];
            c=i+1;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]==x){
           p++;
        }
    }
   if(p>1) cout<<"Still Rozdil"<<endl;
   else cout<<c<<endl;
}
