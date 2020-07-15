#include<iostream>
using namespace std;
int main()
{
    int n,p,q,sum,j=0;
    cin>>n;
    while(n--){
        cin>>p>>q;
        sum = q-p;
        if(sum >= 2){
        j++;
    }

    }

    cout<<j<<endl;
}
