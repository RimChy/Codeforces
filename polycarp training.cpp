#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=1;
    cin>>n;
    int a[n+1];

    for(int i=0;i<n;i++) {
            cin>>a[i];

    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]>=p) p++;
    }
    cout<<p-1<<endl;

}
