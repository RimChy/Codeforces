#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int x=0,p=0;
        while(n>0){
                x=n%k;
                p+=x;
                n=(n-x)/k;
                //cout<<x<<" "<<n<<endl;
                p++;


        }
        cout<<p-1<<endl;
    }
}
