#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,n,k;
    cin>>y>>k>>n;
    int p=k-y%k;
    int x=n-y;
    //cout<<x<<endl;
    if(p<=x){
            cout<<p;
    p=p+k;
    while(p<=x){
        cout<<" "<<p;
        p=p+k;
    }

        }

    else cout<<-1;
    cout<<endl;

}
