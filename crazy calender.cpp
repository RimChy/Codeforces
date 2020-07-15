#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,nim=0,c=1;
    cin>>t;
    while(t--)
    {

       cin>>a>>b;
        int x[a+1][b+1];
        for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){

           cin>>x[i][j];
            if((i+j+2)%2 !=(a+b)%2)
                nim^=x[i][j];
        }
        }
        cout<<"Case "<<c++<<": ";
       if(!nim) cout<<"lose"<<endl;
       else cout<<"win"<<endl;
       nim=0;


    }

}
