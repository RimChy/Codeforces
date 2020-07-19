#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    set<int>s;
    cin>>n>>m;
    int a[n+1],l, b[100005];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=n;i>0;i--){
       s.insert(a[i]);
       b[i]=s.size();
        }
        for(int i=0;i<m;i++){
            cin>>l;
            cout<<b[l]<<endl;
        }
}
