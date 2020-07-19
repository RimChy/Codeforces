#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,l=0,m=0;
    cin>>n;
    int a[n+1];
    vector<int>p,q,r;
   // p[n+1],q[n+1],r[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) p.push_back(i);
        if(a[i]==2) q.push_back(i);
        if(a[i]==3) r.push_back(i);

    }
    int x=min(p.size(),min(q.size(),r.size()));
    //int b=min(x,min(y,z));
    cout<<x<<endl;
    for(int i=0;i<x;i++){
        cout<<p[i]+1<<" "<<q[i]+1<<" "<<r[i]+1<<endl;
    }

}
