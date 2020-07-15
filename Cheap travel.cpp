#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,f;
    cin>>n>>m>>a>>b;
    if(m>=n && b<=n*a){
        cout<<b<<endl;
        return 0;
    }
    else if(m>=n && b>a*n){
        cout<<a*n<<endl;
        return 0;
    }

    int d=(n/m)*b;
    if(n%m!=0){
             f=d+(n%m)*a;
             if(n%m<=m){
        d=d+b;}
        else{
            d=d+(n%m)*b;
        }

    }
    int e=n*a;
    cout<<min(e,min(f,d))<<endl;

}
