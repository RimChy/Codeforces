#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int ncr(int n,int r)
{
    if(n==r || r==0) return 1;
    if(r==1) return n;
    if(arr[n][r] != -1){
        return arr[n][r];
    }
    else {
        arr[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
        return arr[n][r];
    }
}
int main()
{

    int n,r;
    cin>>n>>r;
    memset(arr,-1,sizeof(arr));
    cout<<ncr(n,r)<<endl;
}

