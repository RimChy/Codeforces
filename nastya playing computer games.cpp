#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<(2*n+1)+(n-1)+min(n-k,k-1)<<endl;
}
