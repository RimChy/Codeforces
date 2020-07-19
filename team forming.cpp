#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i+=2){
        s+=abs(a[i]-a[i+1]);
    }
    cout<<s<<endl;
}
