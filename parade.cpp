#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n;
    vector<pair<int,int>>v;
    long long L=0,R=0;
    for(int i=0;i<n;i++){
       cin>>l>>r;
       v.push_back(make_pair(l,r));
       L+=l;
       R+=r;
    }
    //sort(v.begin(),v.end());
    long long sum,sum1,x=0,y=abs(L-R);
    for(int i=0;i<n;i++){
        sum=L-v[i].first+v[i].second;
    sum1=R-v[i].second+v[i].first;
        if(abs(sum-sum1)>y){
            x=i+1;
            y=abs(sum-sum1);
        }

    }
    cout<<x<<endl;
}
