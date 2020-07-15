#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    double sum=0,d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }


    cout<<(sum/n)<<endl;
}
