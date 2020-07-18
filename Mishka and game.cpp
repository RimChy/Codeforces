#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,l=0,j=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>b){
            l++;
        }
        else if(a<b){
            j++;
        }
    }
    if(l>j){
        cout<<"Mishka"<<endl;
    }
    else if(l<j){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}
