#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=0,m;
    for(int i=1;i<n;i++){
        sum+=i;
        if(sum>k) break;
        m=i;
    }


}
