#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int k,n,a;
        cin>>n;
        int arr[n+1]={0};
        for(int j=0;j<n;j++)
        {
            cin>>a;
            arr[a]=1;
        }
        int sum=0;
        for (k=0;k<n+1;k++)
        sum+=arr[k];
        cout<<sum<<endl;
    }

    }
