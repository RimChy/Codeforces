#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long c=10000000000,d=0;
    cin>>n;
    long long int a[n+1],b[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        c=min(a[i],c);
        d=max(b[i],d);
    }
    for(int i=0;i<n;i++){
        if(a[i]==c && b[i]==d){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
