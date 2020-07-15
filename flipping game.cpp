#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin>>n;
    int a[n+1],countone=0,count0=0,x=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            countone+=1;
            if(count0>0) count0-=1;
        }
        else {
            count0+=1;
            if(count0>x){
                x=count0;
            }
        }

    }
    cout<<countone+x<<endl;
}
