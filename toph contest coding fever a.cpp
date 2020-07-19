#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0;
   //while(p<20){
    int t;
    //t=rand()%10;
    cin>>t;
   // cout<<t<<endl;
    while(t--){
        long long int x,y;
        //x=rand()%10+2,y=rand()%10+3;
        cin>>x>>y;
        //cout<<x<<" "<<y<<endl;
        long long sum=0,sum1=0;
        if(x<y){
        sum=x*(x+1);
        sum1=(((2*y-1)*(2*y))/2)-((y-1)*(y));
        cout<<abs(sum-sum1)<<endl;
       // cout<<sum<<" "<<sum1<<" "<<(((2*y-1)*(2*y))/2)<<endl;
        }
        else{
        long long sum2=0,sum3=0;

        sum2=y*(y+1);
        sum3=(((2*x-1)*(2*x))/2)-((x-1)*(x));
        cout<<abs(sum2-sum3)<<endl;
        }
       //cout<<sum<<" "<<sum1<<" "<<sum2<<" "<<sum3<<endl;
       // if(abs(sum-sum1)<abs(sum2-sum3)) cout<<abs(sum-sum1)<<endl;
       // else cout<<abs(sum2-sum3)<<endl;
       //p++;
    }
  // }
}
