#include<bits/stdc++.h>
using namespace std;

int coin[100];
int n,money;
int dp[100][100];

int coin_change(int i,int amount)
{
    if(i==n+1) return 0;
        if(money==amount){
            return 1;
        }


    if(dp[i][amount]!=-1)
    {
        return dp[i][amount];
    }
      int l=0,p=0;
    if(amount+coin[i-1]<=money)
    {
        l=coin_change(i,amount+coin[i]);}
        p=coin_change(i+1,amount);

    return dp[i][amount]=l+p;

}
int main()
{

   cin>>n>>money;
   for(int i=1;i<=n;i++){
    cin>>coin[i];
   }
        memset(dp,-1,sizeof(dp));
        cout<<coin_change(1,0)<<endl;



}
