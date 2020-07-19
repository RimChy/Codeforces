#include<bits/stdc++.h>

using namespace std;
int sum(int n){
    int summ=0;
    while(n!=0){
            summ+=(n%10);
        n=n/10;

    }
    return summ;
}
int main()
{
    int k,n,p=0;
    cin>>k;
    for(int i=19;i<110000000;i+=9){
        if(sum(i)==10){
            p++;
        }
        if(p==k){
            cout<<i<<endl;
            break;
        }
    }

}
