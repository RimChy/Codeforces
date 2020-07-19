#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t;
    cin>>t;
    while(t--){
        cin>>n;

        long long int sum =(n*(n+1))/2-2;
        for(int i=1;pow(2,i)<=n;i++){
            sum -= pow(2,i+1);
        }
        cout<<sum<<endl;
    }
}
