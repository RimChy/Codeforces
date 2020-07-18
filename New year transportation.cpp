#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,flag=0;
    cin>>n>>t;
    int a[n-1];
    for(i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(i=0;i<(n-1); ){
        i=a[i]+i;
        if(i == t-1){
             cout<<"YES"<<endl;
             return 0;


        }
    }
            cout<<"NO"<<endl;

}
