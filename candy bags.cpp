#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++){
            a=i;
        for(int j=1;j<=n;j++){
            if(j==1) a=i;
            else if(j==(n/2)+1) a=a+((n-i)*2)+1;
            else a=a+n;
             cout<<a<<" ";
        }
        cout<<endl;
    }
}
