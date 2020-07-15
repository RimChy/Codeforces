#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n+1];
    int node[210]={0};
    for(int i=0;i<n;i++) {
            cin>>a[i];
    node[a[i]]=1;
    }
    cin>>m;
    int b[m+1];
    for(int i=0;i<m;i++){
        cin>>b[i];
        node[b[i]]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(node[a[i]+b[j]]==0){
                cout<<a[i]<<" "<<b[j]<<endl;
                return 0;
            }
        }
    }

}
