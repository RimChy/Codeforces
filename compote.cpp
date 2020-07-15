#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=a;i>0;i--){
        if(i*2 <= b && i*4 <= c){
            cout<<i+(i*2)+(i*4)<<endl;
            return 0;


        }



        }
        cout<<0<<endl;

}
