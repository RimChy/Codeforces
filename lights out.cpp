#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if((i==0 && (j==0|| j==2)) || (i==2 && (j==0 || j==2)) || (i==1 && j==1)) {
               if(a[i][j]==0) a[i][j]=1;
                else a[i][j]=0;
                }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
