#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,l=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }

    for(int i=1;i<v.size();i++){
        if(v[i]-v[i-1] == 1 ){
            if(v[n]==1000)
        }
    }
    cout<<l-1<<endl;
}
