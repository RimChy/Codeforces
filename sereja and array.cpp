#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    long long sum=0;
    while(m--){
        int type,v,x,y,p;

        cin>>type;
        if(type==1){
            cin>>v>>x;
            a[v-1]=x-sum;
            //cout<<a[v-1]<<endl;
        }
        else if(type==2){
            cin>>y;
            sum+=y;
           // cout<<sum<<endl;
        }
        else if(type==3){
            cin>>p;
            cout<<a[p-1]+sum<<endl;
        }

    }
}
