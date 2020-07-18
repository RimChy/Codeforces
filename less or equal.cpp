#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
       int x;
    if(k==0){
       x=a[0]-1;
       }
       else x=a[k-1];
        if((x<1 || x>1000000000)){
            cout<<-1<<endl;

        }

        else {
            if(x==a[k] && k!=0){
                cout<<-1<<endl;

            }
            else cout<<x<<endl;
        }

}
