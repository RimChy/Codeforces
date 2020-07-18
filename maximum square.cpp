#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],c=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        int x=a[n-1];
        int j=n-1;
        if(a[0]==a[n-1]){
            cout<<a[0]<<endl;
        }
      else{
        while(c<a[j]){
            c++;
            j--;
        }
        cout<<c<<endl;
      }


        c=0;
    }




}

