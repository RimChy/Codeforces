#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k,l=0,a[100];
    cin>>n>>k;
    for(i = 0;i<n;i++){
        cin>>a[i];
    }
    for(j = 0;j< n;j++){

        if(a[j] >= a[k-1] && a[j] != 0){
            l++;

        }
    }
         cout<<l<<endl;



}
