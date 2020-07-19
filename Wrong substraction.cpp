#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n,k=0,l=0,m,p;
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        m = n%10;
        if(m == 0){
            n/=10;
        }
        else{
            n-=1;
        }
    }
    cout<<n<<endl;
}
