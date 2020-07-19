#include<bits/stdc++.h>
using namespace std;
long long int prime[100000007];
void sieve(){
    memset(prime,0,sizeof(prime));
    for(int i=2;i*i<=10000000;i++){
        if(prime[i]==0){
            for(int j=i*2;j<=10000000;j+=i)
                prime[j]=i;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve();
    cout<<prime[n]<<endl;
}
