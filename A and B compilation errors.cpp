#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a,b,c,x=0,y=0,z=0;

    for(int i=0;i<n;i++){
        cin>>a;
        x+=a;
    }
     for(int i=0;i<n-1;i++){
        cin>>b;
        y+=b;
    }
    for(int i=0;i<n-2;i++){
        cin>>c;
        z+=c;
    }

   cout<<x-y<<endl;
   cout<<y-z<<endl;
}





