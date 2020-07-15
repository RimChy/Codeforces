#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int node[n+1]={0};
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(node[a]==0 && node[b]==0 && node[c]==0){
            node[a]=1;
            node[b]=2;
            node[c]=3;
        }
        else if(node[a]!=0){
            if(node[a]==1) node[b]=2,node[c]=3;
            else if(node[a]==2) node[b]=1,node[c]=3;
            else node[b]=1,node[c]=2;
        }
        else if( node[b]!=0){
            if(node[b]==1) node[a]=2,node[c]=3;
            else if(node[b]==2) node[a]=1,node[c]=3;
            else node[a]=1,node[c]=2;
        }
        else if(node[c]!=0){
            if(node[c]==1) node[b]=2,node[a]=3;
            else if(node[c]==2) node[b]=1,node[a]=3;
            else node[b]=1,node[a]=2;
        }

    }
    for(int i=1;i<=n;i++){

        cout<<node[i]<<" ";
    }
    cout<<endl;
}
