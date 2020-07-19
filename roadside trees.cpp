#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t+1];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int sum=a[0]+1;
    for(int i=1;i<t;i++){
        if(a[i]>a[i-1]){
            sum+=a[i]-a[i-1]+2;
        }
        else {
            sum+=a[i-1]-a[i]+2;
        }
    }
    cout<<sum<<endl;
}

