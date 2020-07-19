#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n;
        cin>>n;
        long long x=pow(2,n),y=0;
        for(int i=1;i<(n/2);i++){
            x+=pow(2,i);
        }
    //cout<<x<<endl;
        for(int i=(n/2);i<n;i++){
            y+=pow(2,i);
        }
        //cout<<y<<endl;
        cout<<abs(x-y)<<endl;
    }
}
