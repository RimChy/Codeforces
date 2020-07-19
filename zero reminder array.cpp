#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        map<int,int>mp;
        int a[n+1],b[n+1];
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]%x==0) b[i]=0;
            else {
                int p=a[i]/x;
                b[i]=((p+1)*x)-a[i];
            }
        }
        sort(b,b+n);
        long long sum=0;
        for(int i=0;i<n-1;i++) {
            if(b[i]!=b[i+1]) {
                    sum+=(b[i+1]-b[i]);

        }
        cout<<sum+1<<endl;
    }
}
