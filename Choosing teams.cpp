#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,l=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
            int b=5-v[i];
        if(b>=k){
           l++;
        }


    }
    cout<<l<<endl;
    if(l%3==0){
        cout<<l/3<<endl;
    }
    else{
        cout<<(l-(l%3))/3<<endl;
    }




}
