#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,b;
    cin>>n>>m;
    int a[n+1],c[m+1];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++) {
            cin>>b;
            v.push_back(b);
    }
    sort(a,a+n);
    int k;
   for(int i=0;i<m;i++){
    k=upper_bound(a,a+n,v[i])-a;
    cout<<k<<" ";
   }
   cout<<endl;


}
