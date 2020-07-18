#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0,p=0;
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]>k){
            c=i;
            break;
        }
        else {
            c=i+1;
        }


    }
    for(int i=n-1;i>=0;i--){
        if(a[i]>k){
            p=n-(i)-1;
            break;
        }
        else p=n-(i);


    }





          cout<<min(n,c+p)<<endl;
}
