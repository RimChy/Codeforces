#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];

        for(int i=0;i<n;i++){
            cin>>a[i];

        }

        sort(a,a+n);
        int num=1;
        int i=0,x=0;
        for(int i=0;i<n;i++){
            if(a[i]<=num+x){
               num=num+x+1;
               x=0;
            }
            else x++;
        }
        cout<<num<<endl;


    }
}
