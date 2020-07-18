#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l=0;
    cin>>n>>k;
    int sum=k;
    for( int i=1;i<=n;i++){
        int a=5*i;
        sum+=a;
        if(sum<=240){
            l++;
        }
    }
    cout<<l<<endl;
}
