#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long sum=0,sum1=0;
    int n;
    cin>>n;
    int a;
    vector< int>v;
    while(n--){
        cin>>a;
        v.push_back(a);
        sum1+=a;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()/2;i++){
        sum+=v[i];
    }
    sum1=sum1-sum;
    cout<<sum*sum+sum1*sum1<<endl;


}
