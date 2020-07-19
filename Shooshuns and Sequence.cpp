#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p=0;
    cin>>n>>m;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    p=m-1;
    for(int i=n-1;i>=0;i--){
        if(a[i]!=a[m-1]){
            p=i;
            break;
        }
    }
    if(p>m-1)
     cout<<-1<<endl;
     else if(p==m-1) cout<<0<<endl;
     else cout<<p+1;


}
