#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7];
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    sort(a,a+6);
    if((a[0]==a[1] && a[1]==a[2] && a[2]==a[3])||(a[1]==a[2] && a[2]==a[3] && a[3]==a[4]) ||(a[2]==a[3] && a[3]==a[4] && a[4]==a[5])){
       if((a[0]==a[1] && a[1]!=a[2])  || (a[4]==a[5] && a[4]!=a[3]) || (a[0]==a[4] && a[5]==a[1] ))cout<<"Elephant"<<endl;
        else cout<<"Bear"<<endl;


       }
       else cout<<"Alien"<<endl;
}
