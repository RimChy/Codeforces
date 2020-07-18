#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v,v1;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            v.push_back(a);
        }
        long long sum=abs(v[1]-v[0]),x=0,p=0;
        v1.push_back(v[0]);
        v1.push_back(v[1]);
       for(int i=2;i<v.size();i++){
        x=abs(v[i]-v[i-1]);
        if(sum+x<=abs(v[i]-v[p])){
            v1.pop_back();
            v1.push_back(v[i]);
            sum-=abs(v[i-1]-v[p]);
            sum+=abs(v[i]-v[p]);
            p=i;
        }
        else {
            v1.push_back(v[i]);
            sum+=x;
        }

       }
       for(int i=0;i<v1.size();i++) cout<<v1[i]<<endl;
    }
}
