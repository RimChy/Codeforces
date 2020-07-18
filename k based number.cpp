#include<bits/stdc++.h>
using namespace std;
int dp[100],n,k;
int number(int i,int k)
{
     dp[0]=k-1;
     dp[1]=k*(k-1);


            for(i=2;i<n;i++){
        dp[i]=(dp[i-1]+dp[i-2])*(k-1);

    }
    return dp[n-1];

}
int main()
{

    cin>>n>>k;

    cout<<number(n,k)<<endl;

}
