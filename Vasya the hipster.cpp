#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<min(n,m)<<" ";
    if(n==min(n,m)){
        cout<<(m-n)/2<<endl;
    }
    else{
        cout<<(n-m)/2<<endl;
    }
}
