#include<bits/stdc++.h>
#define mx 1000005
#define mxx 1000000000000
using namespace std;
bool isprime[mx],prime[mx];
vector<long long int>v;
vector<long long>v1;

void sieve(long  l,long long r)
{
    memset(isprime,true,sizeof(isprime));
    for(long long int i=2;i*i<=mx;i++){
        if(isprime[i]==true){
            for(long long int j=2*i;j<=mx;j+=i){
                isprime[j]=false;
            }
        }
    }
    for(long long int i=2;i<=mx;i++){
        if(isprime[i]==true) v.push_back(i);
    }
    //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    //cout<<endl;

   memset(prime,true,sizeof(prime));
  for(long long int i=0;v[i]*v[i]<=r;i++){
    long long curprime=v[i];
    long long base=(l/curprime)*curprime;
   if(base<l) base+=curprime;
    for(long long j=base;j<=r;j+=curprime){
        prime[j-l]=false;
       // cout<<j-l<<" ";

  }
   if(base==curprime) prime[base-l]=true;
  }
   //cout<<i<<endl;
   //cout<<(long long)(mxx-l)<<endl;

  for(long long int i=l;i<=r;i++){
    if(prime[i-l]==true) {
            v1.push_back(i);
    //cout<<i<< " ";
        //cout<<base<<" ";
   }
  }


   for(int i=0;i<v1.size();i++) cout<<v1[i]<<" ";




}
int main()

{
    long long int n,l,r;
    cin>>l>>r;
    sieve(l,r);
}

