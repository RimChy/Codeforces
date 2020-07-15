#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,q=0;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) p++;
        else q++;
    }
    if(q%2==0) cout<<p<<endl;
    else cout<<q<<endl;

}
