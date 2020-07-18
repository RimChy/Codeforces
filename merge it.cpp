#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+1],b[4];
        memset(b,0,sizeof(b));
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ++b[a[i]%3];

        }
        int k=min(b[1],b[2]);
        int m=b[0]+k+(b[1]-k)/3+(b[2]-k)/3;
        cout<<m<<endl;

    }
}
