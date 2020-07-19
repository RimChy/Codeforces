#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int m=(n*(n-1))/2;
        cout<<"Case "<<c++<<": ";
        if(m%2==0) cout<<m/2<<endl;
        else cout<<m<<"/"<<2<<endl;
    }
}
