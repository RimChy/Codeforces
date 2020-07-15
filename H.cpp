#include<bits/stdc++.h>
#define  ll long long
using namespace std;

std::vector<ll> a,b,c;
map<Pair,ll>lol;
ll gcd(ll a, ll b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{

    FAST_IO();
    ////////////////////////
    ll n;
    cin>>n;
    for(int i=0; i<n ; i++){
        ll temp;
        cin>>temp;
        a.pb(temp);
    }
    for(int i=0; i<n ; i++){
        ll temp;
        cin>>temp;
        b.pb(temp);
    }
    for(int i=0; i<n ; i++){
        if(a[i]==0){
            if(b[i]==0)
                cnt++;
        }
        else{
            if(a[i]<0){
                a[i]*=-1;
                b[i]*=-1;
            }
            else if(a[i]==0 &&b[i]<0)
                b[i]*=-1;
            ll temp=gcd(abs(a[i]),abs(b[i]));
            ll x=a[i]/temp;
            ll y=(b[i]/temp);
            // cout<<-y<<" "<<x<<endl;
            lol[make_pair(y,x)]++;
            cnt1=max(cnt1,lol[make_pair(y,x)]);
        }

    }
    cnt+=cnt1;
    cout<<cnt<<endl;
    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

