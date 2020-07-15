#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b=a[0];
    int c=a[1],p=0;
    for(int i=2;i<n;i++){

        if(a[i]>b || a[i]>c){
                int sum=b+c+a[i];
                int y=min(b,min(c,a[i]));

        //cout<<b<<" "<<c<<" "<<sum<<endl;
            b=max(a[i],max(b,c));
            c=sum-y-b;
        //cout<<b<<" "<<c<<" "<<i<<endl;
        }
        if(a[i]<b && a[i]<c) {
                p++;
        //cout<<p<<endl;}
    }

}
cout<<p<<endl;



}
