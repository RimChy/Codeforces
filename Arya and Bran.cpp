#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,a,l=0,sum=0;
    cin>>n>>k;
    while (n--){
        cin>>a;
        if(a>=8)
            a=8;
        sum+=a;
        l++;
        if(sum>=k){
            break;
        }

    }
   if(sum >=k){
    cout<<l<<endl;
   }
   else{
    cout<<-1<<endl;
   }
}
