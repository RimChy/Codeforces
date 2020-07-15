#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n+1];
//    long long int m=10000000000,n;
    for(int i=1;i<=n;i++) {
            cin>>arr[i];

    }
    for(int i = 1; i <=n; i++){

        bool ck = true;
        for(int j = max(i - x, (int)1); j < i; j++) {
            if(arr[j] <= arr[i]) ck = false;
        }

        for(int j = i + 1; j <= min(i + y, n); j++) {
            if(arr[j] <= arr[i]) ck = false;
        }

        if(ck) return cout << i << endl,0;
    }

}



