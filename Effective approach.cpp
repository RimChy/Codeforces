#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1],c;
    for(int i=0;i<n;i++){
        scanf("%d",&c);
        a[c]=i;
    }
    int m,b;
    cin>>m;
    long long x=0,y=0;
    while(m--){
           scanf("%d",&b);
            x+=a[b]+1;
            y+=n-a[b];
    }
    printf("%I64d %I64d\n",x,y);
}
