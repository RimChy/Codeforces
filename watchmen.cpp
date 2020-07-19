#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>x,y;
    map<pair<int,int>,int>m;
    long long int a[n+1],b[n+1],ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        ans+=x[a[i]]+++y[b[i]]++-m[make_pair(a[i],b[i])]++;//mane holo jegulate x r y 2tai soman oitr jnno minus


    }
   cout<<ans<<endl;


}
