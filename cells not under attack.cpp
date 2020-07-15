#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int a[n+1],b[n+1];
    set<long long int>s,s1;
    long long int x,y,ans=0;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        s.insert(x);
        s1.insert(y);
        cout<<(long long)(n-s.size())*(n-s1.size())<<endl;


    }
}
