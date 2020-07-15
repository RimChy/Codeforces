#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<long long int>v;
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            v.push_back((upper_bound(s.begin(),s.end(),s[i])-s.begin())-(lower_bound(s.begin(),s.end(),s[i])-s.begin()));
        }
    }
    sort(v.begin(),v.end());
    long long int sum=0;
    for(int i=v.size()-1;i>=0;i--){
           // cout<<v[i]<<" ";

        if(v[i]<=k){
            sum+=v[i]*v[i];
            k-=v[i];
        }
        else {
            sum+=(k*k);
            break;
        }
   /* if(v[i]>k)
       {
          // sum+=k*k;
          break;
       }
      // if(k==0) break;*/
      //cout<<k<<endl;
    }


  // sum+=k*k;
    cout<<sum<<endl;
}
