#include<bits/stdc++.h>
using namespace std;
int n,maxW,w[1000],value[100];
int f(int indx,int weight)
{
    if(indx == n+1){
        return 0;
    }
    int profit1=0,profit2=0;
    if(weight+w[indx]<=maxW)
        profit1=value[indx]+f(indx+1,weight+w[indx]);
        profit2=f(indx+1,weight);
        return max(profit1,profit2);

}
int main()
{

   cin>>n>>maxW;

   for(int i=0;i<n;i++){

    cin>>w[i];
    cin>>value[i];




   }
   cout<<f(1,0)<<endl;
   return 0;
}
