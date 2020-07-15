#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int x=0,c=0,k=0;
    if(n==1){
        cout<<v[0]<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(v[i]!=v[i+1]){
          if(i+1-c>c){
            c=i+1-c;
            k=i;

          }
          x=i+1;
        }
       // cout<<c<<" "<<k<<" "<<x<<endl;
    }
   if(n-x>=c) cout<<v[x]<<endl;
   else cout<<v[k]<<endl;






}
