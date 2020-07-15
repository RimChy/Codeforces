#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,k=0,l=0,b=0;
    cin>>n;
    int a[n];
    set<int>s;
    for(i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }

   for(i=1;i<s.size();i++){
    if(a[i]<a[0]){

        l++;
    }
   }
   j=a[0];
   for(i=1;i<s.size();i++){
    if( a[i]>j){
        j=a[i];
        b++;
    }
   }

   cout<<l+b<<endl;


}
