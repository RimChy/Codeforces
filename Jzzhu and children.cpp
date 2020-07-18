#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1],b[n+1],x=0;
    double mx=0;
    for(int i=0;i<n;i++){
            cin>>a[i];
            if(mx<=ceil((double)a[i]/m)){
                mx=ceil((double)a[i]/m);
                x=i;
            }
    }
    cout<<x+1<<endl;

}
