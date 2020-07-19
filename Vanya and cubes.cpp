#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,l,m=0;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        l=(i*(i+1))/2;
        sum+=l;
        if(sum<=n) {
            m++;
        }
    }
    cout<<m<<endl;
}
