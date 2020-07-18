#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,b;
    cin>>n;
    vector<long long int>v;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>b;
        v.push_back(b);
        sum+=b;
    }
    long long int a[n+1];
    memset(a,0,sizeof(a));
    if(sum%3!=0) cout<<0<<endl;
    else{
            long long int s=sum/3,s1=0,c=0,ans=0;
          //  cout<<s<<endl;
    for(int i=0;i<v.size();i++){
            s1+=v[i];
        if(s1==s){
            c++;
          //  cout<<i<<endl;
        }
        if(s1==2*s) {
                ans+=c;
        }
       // cout<<v[i]<<endl;
    }

 /*  for(int i=v.size()-1;i>=0;i--){
        s1+=v[i];
        if(s1==s) a[i]=1;
    }*/

  /*  for(int i=0;i<n;i++){
        if(a[i]==1) c++;
    }*/
    cout<<ans<<endl;

    }

}
