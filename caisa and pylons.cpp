#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0,p=0;
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        p+=a[i-1]-a[i];
        if(p<0){
            s+=abs(p);
            p=0;
        }
    }
    cout<<s<<endl;

}
