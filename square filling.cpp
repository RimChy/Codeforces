#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1],b[n+1][m+1];
    memset(b,0,sizeof(b));
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            //cout<<b[i][j]<<" ";
        }
    }
    //cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
           if(a[i][j]==1 && a[i+1][j]==1 && a[i][j+1]==1 && a[i+1][j+1]==1){
            b[i][j]=1;
            b[i+1][j]=1;
            b[i][j+1]=1;
            b[i+1][j+1]=1;
            v.push_back(make_pair(i+1,j+1));

           }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
               // cout<<b[i][j]<<" ";
            if(a[i][j]!=b[i][j]){
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
