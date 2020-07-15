#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(~scanf("%d",&n)){
            int a[n+1],c=0;
        for(int i=0;i<5;i++){
            cin>>a[i];
            if(n==a[i]) c++;
        }
      cout<<c<<endl;
    }
}
