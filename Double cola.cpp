#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    r=n%5;
    if(r==1){
        cout<<"Sheldon"<<endl;
    }
    else if(r==2){
        cout<<"Leonard"<<endl;
    }
    else if(r==3){
        cout<<"Penny"<<endl;
    }
    else if(r==4){
        cout<<"Rajesh"<<endl;
    }
    else{
        cout<<"Howard"<<endl;
    }
}

