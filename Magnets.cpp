#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        if(a[i] != a[i+1]){
        j++;
    }
    }

    cout<<j<<endl;


}