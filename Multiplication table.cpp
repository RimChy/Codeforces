#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,k,l=0;
    cin>>n;
    int a[n][n];

    cin>>k;

    for(i=1;i<=n;i++){
        if(k%i==0 && k/i<=n){
            l++;
        }
    }
    cout<<l <<endl;








}
