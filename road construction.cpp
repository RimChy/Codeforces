#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a,b,graph[n+1]={0};
    for(int i=0;i<m;i++){
        cin>>a>>b;
        graph[a]=1;
        graph[b]=1;
    }
   int j=1;
   while(graph[j]){
    j++;
   }
   cout<<n-1<<endl;
   for(int i=1;i<=n;i++){
    if(i!=j) cout<<j<<" "<<i<<endl;
   }
}
