#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,q=0,x=0,y=0;
    cin>>n;
    int l,r;
    for(int i=0;i<n;i++){
        cin>>l>>r;
        if(l==0) p++;
        else q++;
        if(r==0) x++;
        else y++;
    }
    cout<<min(p,q)+min(x,y)<<endl;
}
