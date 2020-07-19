#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n,sum=0,l=0,p=0,x=0;
    cin>>n;
    long long int a[n+1];
    vector<long long int>v;
    vector<long long int>v1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            v.push_back(a[i]);
        }
        else{
            v1.push_back(a[i]);
        }
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<v.size();i++){
            sum+=v[i];
    }
        for(int j=0;j<v1.size();j++){
            sum+=v1[j];
        }


    if(v1.size()%2!=0)  cout<<sum-v1[0]<<endl;
    else cout<<sum<<endl;
}


