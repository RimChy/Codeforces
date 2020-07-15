#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,ans=0;
    cin>>n;

    vector<int>v;
    for(int i = 0;i<n;++i) {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());



    for(int i =0;2*i<n;i++) {
        ans += (v[i]+2)/2;
    }

    cout<<ans<<endl;


}
