#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n, k;
        cin>>n>>k;
        long long p=k%(n-1);
        if(p == 0){
            cout<<k+(k/(n-1))-1<<endl;
        }
        else cout<<k+(k/(n-1))<<endl;
    }
}
