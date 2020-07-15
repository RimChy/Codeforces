#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxindex=0,minindex=0,p=0;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>a[maxindex]){
            maxindex=i;
            p++;
        }
        if(a[i]<a[minindex]){
            minindex=i;
            p++;
        }
    }
    cout<<p<<endl;
}
