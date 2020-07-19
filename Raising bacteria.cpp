#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a=1;
    cin>>x;
    while(a<=x){
      a=a*2;
      if(a==x){
            cout<<1<<endl;
    }
    else{
        cout<<1+x-a<<endl;
    }
}
}
