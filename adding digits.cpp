#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,flag=1;
    int n,z;
    //int x=,y=b-'1',z;
    string str,si;

    cin>>a>>b>>n;

    for(int i=0;i<=9;i++){
        z=a%b;
        if((z*10+i)%b==0){
                cout<<a*10+i;
        string s(n-1,'0');
        cout<<s<<endl;
            flag=0;
            break;
        }
    }

   // s+=si;
   //cout<<x<<y<<endl;

    if(flag==1) cout<<-1<<endl;

}
