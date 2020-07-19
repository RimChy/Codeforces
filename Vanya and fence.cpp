#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,h,a,l=0;
    cin>>n>>h;
    for(i = 0;i<n;i++){
        cin>>a;
        if(a>h){
            j++;
        }
        else{
            l++;
        }
    }
    cout<<j*2+l<<endl;
}
