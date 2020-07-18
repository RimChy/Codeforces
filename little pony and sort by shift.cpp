#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,x;
    cin>>n;
    int b[n+1];
    for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n-1;i++){
            if(b[i]>b[i+1]){
                x=i;
                p++;
            }
        }
        if(b[n-1]>b[0]){
            x=n-1;
            p++;
        }
        if(p==0) cout<<0<<endl;
        if(p>1) cout<<-1<<endl;
        else cout<<n-x-1<<endl;

}
