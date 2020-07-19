#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y,z,a,n,Xsum=0,Ysum=0,Zsum=0;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>x>>y>>z;
        Xsum += x;
        Ysum += y;
        Zsum += z;


    }
    if(Xsum == 0 && Ysum == 0 && Zsum == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
