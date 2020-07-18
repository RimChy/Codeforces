#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int k,x,flag=0;
    cin>>k;
    for(int i=0;i<n;i++){
        if(k<=b[i]){
            x=n-i;
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<x<<endl;
    else cout<<n<<endl;
}
