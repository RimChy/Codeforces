#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[8],brr[8];
    cin>>n;
    int sum=0;
    for(int i=0;i<7;i++){
        cin>>arr[i];
        brr[i]=arr[i]+sum;
        sum=brr[i];
       // cout<<brr[i]<<" ";
    }
   /* if(n%brr[6]==0 && brr[6]!=1){
        cout<<7<<endl;
        return 0;
    }*/
    n=(n-1)%brr[6]+1;
    for(int i=0;i<7;i++){
        if(n<=brr[i]){
            cout<<i+1<<endl;
            break;

        }
        }

}
