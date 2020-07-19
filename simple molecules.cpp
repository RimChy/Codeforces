#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)%2!=0){
        cout<<"Impossible"<<endl;
        return 0;
    }
    int x=(b+c-a)/2,y=(c+a-b)/2,z=(a+b-c)/2;
    if(x<0 || y<0 || z<0){
        cout<<"Impossible"<<endl;
    }
    else cout<<z<<" "<<x<<" "<<y<<endl;
}
