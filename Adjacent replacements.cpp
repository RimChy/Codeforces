#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%2==0) cout<<a-1<<" ";
        else cout<<a<<" ";
    }
    cout<<endl;
}
