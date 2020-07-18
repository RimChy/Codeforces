#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[5][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    int p=0,q,r;
    for(int i=0;i<3;i++){

            p=0,q=0,r=0;
        for(int j=0;j<3;j++){
                p=0;
            if(a[i][j]=='#' ) p++;
            if(a[i+1][j]=='#') p++;
            if(a[i][j+1]=='#') p++;
            if(a[i+1][j+1]=='#') p++;
               //cout<<p<<endl;
            if(p==3 || p==1 || p==0 || p==4){
                cout<<"YES"<<endl;
                return 0;
            }


        }
    }
    cout<<"NO"<<endl;




}
