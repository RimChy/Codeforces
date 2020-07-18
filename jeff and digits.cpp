#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],p=0,q=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==5) p++;
        else q++;
    }
    if(q<1) cout<<-1<<endl;
   else  if(p<9 && q>1) cout<<0<<endl;
    else {
        for(int i=1;i<=(p/9)*9;i++) cout<<5;
        for(int j=1;j<=q;j++) cout<<0;
        cout<<endl;
    }

}
