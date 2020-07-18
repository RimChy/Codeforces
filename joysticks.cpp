#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(1){
            int k=0;
    if(a<=b){
       a=a+1;
       b=b-2;
       k++;
    }
    else{
        b=b+1;
        a=a-2;
        k++;
    }
    if(a==0 || b==0 || a<=2 && b<=2){
        cout<<k<<endl;
        return 0;
    }
    }
}
